class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int fr = 0 , ans = 0;
        for(int i = 0;i < nums.size();i++){
            if(fr == 0) ans = nums[i];
            if(nums[i] == ans) fr++;
            else fr--;
        }
        return ans;
    }
};