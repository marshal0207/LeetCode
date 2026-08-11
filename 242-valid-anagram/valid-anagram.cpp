class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        if(n == 0) return true;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s == t) return true;
        return false;
    }
};