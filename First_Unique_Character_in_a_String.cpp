#include <iostream>
#include <vector>
#include <unordered_map>

int firstUniqChar(std::string s) {
    std::unordered_map<char, int> charCount;
    
    // Count the occurrences of each character in the string
    for (char c : s) {
        charCount[c]++;
    }
    
    // Find the first character with a count of 1
    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }
    
    return -1; // Return -1 if no unique character is found
}

int main() {
    std::string s = "leetcode";
    
    int index = firstUniqChar(s);
    
    std::cout << "First unique character index: " << index << std::endl;
    
    return 0;
}
