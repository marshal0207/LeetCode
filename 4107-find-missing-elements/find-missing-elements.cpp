class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector <int> temp;
        sort(nums.begin(),nums.end());
        for(int i = nums[0];i < nums.back();i++){
            if(!binary_search(nums.begin(),nums.end(),i)){
                temp.push_back(i);
            }
        }
        return temp;
   }
};