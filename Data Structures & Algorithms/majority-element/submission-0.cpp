class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size();
        for(int x:nums){
            freq[x]++;
        }
        for(auto it:freq){
            if(it.second >n/2){
                return it.first;
            }
        }
    }
};