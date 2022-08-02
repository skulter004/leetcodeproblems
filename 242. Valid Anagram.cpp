class Solution {
public:
    bool isAnagram(string s, string t) {
        int arrs[26] = {0};
        int arrt[26] = {0};
        
        if(s.length() != t.length()) return false;
        
        for(int i = 0; i < s.length(); i++){
            arrs[s[i] - 97]++;
            arrt[t[i] - 97]++;
        }
        for(int i = 0; i < 26; i++){
            if(arrs[i] != arrt[i]) return false;
        }
        return true;
    }
};
