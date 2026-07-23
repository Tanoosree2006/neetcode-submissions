class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>res;
        vector<int>ans;
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        for(auto it:freq){
            res.push_back({it.second,it.first});
        }
        sort(res.rbegin(),res.rend());
        for(int i=0;i<k;i++){
            ans.push_back(res[i].second);
        }
        return ans;
    }
};
