class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0; // Pointer for s
        int j = 0; // Pointer for t
        
        // Match as many characters of t from the beginning as possible inside s
        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                j++; // Found a match for t[j], move to the next character in t
            }
            i++; // Always move forward in s
        }
        
        // j now represents the number of characters in t that successfully matched.
        // The remaining characters must be appended.
        return t.length() - j;
    }
};
