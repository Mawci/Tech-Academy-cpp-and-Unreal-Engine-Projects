// Demo: Fixing subtle bug with std::map::operator[]
// By Giovanni Dicanio

#include <cassert>  // for assert
#include <iostream> // for console output
#include <map>      // for std::map
#include <string>   // for std::string
using namespace std;

void PrintC64Memory( map<string, int> const& memory ) {
// *** BUG: Use of std::map::operator[] with const& map
//
//    cout << " The C64 has " << memory["C64"] << "KB of memory. \n";
//
// *** FIX: Use std::map::find

    // Look up the C64 RAM in the map
    auto it = memory.find("C64");

    // Assume the C64 is in the map
    assert(it != memory.end());

    // Print the amount of memory (it->second)
    cout << " The C64 has " << it->second << "KB of memory. \n";
}

int main() {
    map<string, int> computerMemoryKB{};
    computerMemoryKB["C64"]       = 64;  // KB
    computerMemoryKB["Amiga 500"] = 512; // KB
    // ...

    PrintC64Memory(computerMemoryKB);
}

