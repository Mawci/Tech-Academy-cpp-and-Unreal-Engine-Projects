// Demo: Associate some integer numbers to their pronunciation using std::map
// By Giovanni Dicanio

#include <cassert>  // for assertions
#include <iostream> // for console output
#include <map>      // for std::map
#include <string>   // for std::string
using namespace std;

int main() {
    // Create an empty map
    map<int, string> numbers{};
    
    // Verify that the map is initially created empty
    assert( numbers.empty() );

    // Create some number-pronunciation associations in the map;
    // note that this creation sequence is *not* in key-sorted order
    numbers[1]  = "one";
    numbers[2]  = "two";
    numbers[64] = "sixty-four";
    numbers[4]  = "four";
    numbers[3]  = "three";

    // Print the content of the map
    for (auto const& [num, pronunciation] : numbers) {
        cout << " The number " << num << " is pronounced " << pronunciation << ". \n";
    }
}

