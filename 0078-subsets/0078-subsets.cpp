class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>> &res,vector<int> v,int idx){
        if (idx == nums.size()){
            res.push_back(v);
            return;
        }
        solve(nums,res,v,idx+1);
        v.push_back(nums[idx]);
        solve(nums,res,v,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> v;
        int idx = 0;
        solve(nums,res,v,idx);
        return res;
    }
};