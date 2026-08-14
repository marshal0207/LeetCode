class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l_sum =0;
        int r_sum =0;
        if(nums.size() == 1 && nums[0] == 0){
            return 0;
        }
        for(int i = 0;i<nums.size();i++){
            int l_sum =0;
            int r_sum =0;
            int p = i;
            for(int j = 0;j<p;j++){
                l_sum += nums[j];
            }
            for(int k =p+1;k<nums.size();k++){
                r_sum += nums[k];
            }
            if(l_sum == r_sum){
                return p;
            }
        }
        return -1;
    }
};