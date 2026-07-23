class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>res=nums;
        res.insert(res.end(),res.begin(),res.end());
        return res;
    }
};