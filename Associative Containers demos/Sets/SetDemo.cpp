// Basic std::set demo: Shows set creation, element insertion, removal and search
// by Giovanni Dicanio

#include <iostream> // for std::cout
#include <ostream>  // for std::ostream
#include <set>      // for std::set
#include <string>   // for std::string
using namespace std;

// Print set<string> content in the form: 
//   {s1, s2, ..., sn}
ostream & operator<<(ostream & os, const set<string> & strings) {
    os << '{';

    bool isFirst = true;
    for (const auto & s : strings) {
        if (isFirst) {
            os << s;
            isFirst = false;
        } else {
            os << ", " << s;
        }
    }

    os << '}';
    return os;
}

// Show basic operations with std::set
int main() {
    set<string> colors{ "red", "yellow", "blue" };
    cout << " Initial set of colors: \n";
    cout << "  " << colors << "\n\n";

    colors.insert("green");
    cout << " After inserting green: \n";
    cout << "  " << colors << "\n\n";

    colors.insert("green");
    cout << " Trying to insert green again: \n";
    cout << "  " << colors << "\n\n";

    colors.erase("red");
    cout << " After removing red: \n";
    cout << "  " << colors << "\n\n";

    auto it = colors.find("blue");
    if (it != colors.end()) {
        cout << " The set contains blue. \n";
    } else {
        cout << " The set doesn't contain blue. \n";
    }
}

