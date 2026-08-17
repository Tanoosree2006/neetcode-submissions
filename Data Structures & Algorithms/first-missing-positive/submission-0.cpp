class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int exp=1;
        for(int x:nums){
            if(x==exp) exp++;
        }
        return exp;
    }
};