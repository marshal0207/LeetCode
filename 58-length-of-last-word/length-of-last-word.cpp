class Solution {
public:
    int lengthOfLastWord(string s) {
        while(s.back() == ' '){
            s.pop_back();
        }
        int n = s.length();
        int ans = -1;
        for(int i = 0;i<n;i++){
            if(s[i] == ' '){
                ans = max(ans,i);
            }
        }
        return n - ans - 1;
    }
};