class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector <int> temp;  
        int i = 0;
        int j = 0;

        while(j < nums2.size() && i < nums1.size()){
            if(nums1[i] == nums2[j]){
                if(temp.empty() || temp.back() != nums1[i]){
                    temp.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else j++;
        }
        return temp;
    }
};