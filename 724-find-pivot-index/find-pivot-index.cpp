class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for(int i = 0;i<nums.size();i++){
            total += nums[i];
        }
        int left_sum = 0;
        for(int j = 0;j < nums.size();j++){
            int right_sum = total - left_sum - nums[j];

            if(left_sum == right_sum) return j;

            left_sum += nums[j];
        }
        return -1;
    }
};