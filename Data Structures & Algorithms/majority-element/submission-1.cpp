class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size();
        int res=0;
        for(int x:nums){
            freq[x]++;
        }
        for(auto it:freq){
            if(it.second >n/2){
                res= it.first;
            }
        }
        return res;
    }
};