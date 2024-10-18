//=============================================================================
// Count words using std::unordered_map.
// by Giovanni Dicanio
//=============================================================================


//
// Includes
//
#include <algorithm>                    // for std::remove
#include <cctype>                       // for std::isalnum
#include <chrono>                       // for std::chrono
#include <fstream>                      // for std::ifstream
#include <iostream>                     // for std::cout
#include <unordered_map>                // for std::unordered_map
#include <string>                       // for std::string
#include <vector>                       // for std::vector
#include <boost/algorithm/string.hpp>   // for boost::split
using namespace std;


//
// Given a string vector as input, return for each word the associated count.
//
unordered_map<string, int> CountWords(vector<string> const& words) {
    unordered_map<string, int> wordCount{};
    for (auto const& word : words) {
        ++wordCount[word];
    }

    return wordCount;
}


//
// Given a filename as input, return a string vector containing the words
// read from the input file.
//
vector<string> ReadWordsFromFile(string const& filename) {
    vector<string> words{};
    
    // Read file line by line
    ifstream inFile{filename};
    string line{};
    while (getline(inFile, line)) {
        // Parse the current line, splitting it into words
        vector<string> wordsInLine{};
        boost::split(wordsInLine, line, [](char ch) { return !isalnum(ch); }, 
                     boost::algorithm::token_compress_on);
    
        // Add current parsing results to the words array
        words.insert(end(words), begin(wordsInLine), end(wordsInLine));
    }

    // Erase spurious empty strings returned by boost::split,
    // using the erase-remove idiom.
    words.erase(remove(begin(words), end(words), ""), end(words));

    return words;
}


//
// Main
//
int main() {
    const vector<string> words = ReadWordsFromFile("test.txt");
    
    auto start = chrono::system_clock::now();
        unordered_map<string, int> wordCount = CountWords(words);
    auto end = chrono::system_clock::now();
    auto elapsed_ms = chrono::duration_cast<chrono::milliseconds>(end - start);

    cout << " Word counting took " << elapsed_ms.count() << " ms. \n";
    cout << " Processed " << wordCount.size() << " words. \n\n";   
  
#ifdef PRINT_WORD_COUNTS
    cout << " \n Word counts: \n";
    for (auto const& [word, count] : wordCount) {
        cout << ' ' << word << ": " << count << '\n';
    }
#endif
}

