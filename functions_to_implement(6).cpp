#include <iostream>
#include <vector>
#include <algorithm>

/* String functions section */

// Splits a single string on separator into a vector of strings
std::vector<std::string> Split(std::string whole, std::string separator) {
    std::vector<std::string> result;
    size_t pos;
    while ((pos = whole.find(separator)) != std::string::npos) {
        result.push_back(whole.substr(0, pos));
        whole.erase(0, pos + separator.length());
    }
    result.push_back(whole);
    return result;
}

// Takes two strings and returns a new string that is the result of removing all occurrences of s2 from s1.
std::string RemoveAllSubstrings(std::string s1, std::string s2) {
    size_t pos;
    while ((pos = s1.find(s2)) != std::string::npos) {
        s1.erase(pos, s2.length());
    }
    return s1;
}

// Takes two strings and returns a new string that is the result of removing the first occurrence of s2 from s1.
std::string RemoveFirstSubstring(std::string s1, std::string s2) {
    size_t pos = s1.find(s2);
    if (pos != std::string::npos) {
        s1.erase(pos, s2.length());
    }
    return s1;
}

// Joins all strings in a vector together, using the glue string in between them
std::string Join(std::vector<std::string> pieces, std::string glue) {
    std::string result;
    for (size_t i = 0; i < pieces.size(); ++i) {
        result += pieces[i];
        if (i != pieces.size() - 1) {
            result += glue;
        }
    }
    return result;
}

// Removes all factors of 2 from the number
int RemoveTwos(int original) {
    while (original % 2 == 0) {
        original /= 2;
    }
    return original;
}

// Removes elements in 'a' that exist in 'b'
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (int num : a) {
        if (std::find(b.begin(), b.end(), num) == b.end()) {
            result.push_back(num);
        }
    }
    return result;
}
