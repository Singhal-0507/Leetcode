class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,res=0;
        for(auto i:nums){
            if (i==1) count++;
            else count=0;
            res=max(res,count);
        }
        return res;
    }
};