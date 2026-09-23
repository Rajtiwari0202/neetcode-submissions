class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;//length of s;
        int j=0;//lenght of t
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j])i++;//match found inc pointer for 
            j++;//alwss move pointer for t string char
        }
        return i==s.length();
    }
};