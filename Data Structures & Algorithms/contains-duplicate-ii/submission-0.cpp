class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int r=0;r<nums.size();r++){
            int l=max(0,r-k);
            while(l<r){
                if(nums[l]==nums[r]){
                    return true;
                }
                l++;
            }
        }
        return false;
    }
};