#include "sqlite3.h"
#include <stdio.h>
#include <iostream>
#include "Handle.h"
#include"SQLite_sample.h"

using namespace std;

static char const* TypeName(Type const type)
{
    switch (type)
    {
    case Type::Integer: return "Integer";
    case Type::Float: return "Float";
    case Type::Blob: return "Blob";
    case Type::Null: return "Null";
    case Type::Text: return "Text";
    }

    ASSERT(false);
    return "Invalid";
}

int main()
{
    try
    {
        Connection connection = Connection::Memory();

        Execute(connection, "create table Hens (Name)");

        Execute(connection, "insert into Hens (Name) values (?)", "Marge");
        printf("Inserted %lld\n", connection.RowId());

        Execute(connection, "insert into Hens (Name) values (?)", "Jane");
        printf("Inserted %lld\n", connection.RowId());

        for (Row row : Statement(connection, "select RowId, Id, Name from Hens"))
        {
            printf("%s\n", row.GetString(0), row.GetInt(1), row.GetString(2));
        }
    }
    catch (Exception const& e)
    {
        printf("%s (%d)\n", e.Message.c_str(), e.Result);
    }
}

