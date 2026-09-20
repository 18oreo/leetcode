// Stringstream approach

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        string word, lastWord;
        stringstream ss(s);
        while (ss >> word) {
            lastWord = word;
        }
        return lastWord.length();
    }
};