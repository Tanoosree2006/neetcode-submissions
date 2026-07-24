class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        int cnt=0;
        for(int x:nums){
            freq[x]++;
        }
        for(auto it:freq){
            if(it.second>1){
                return it.first;
            }
        }
        return -1;
    }
};
