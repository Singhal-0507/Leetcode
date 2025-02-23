class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>> &res,vector<int> v,int idx,set<vector<int>> &st){
        if (idx == nums.size()){
            sort(v.begin(),v.end());
            if(st.find(v) == st.end()){
                res.push_back(v);
                st.insert(v);
            }
            return;
        }
        solve(nums,res,v,idx+1,st);
        v.push_back(nums[idx]);
        solve(nums,res,v,idx+1,st);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> st;
        vector<vector<int>> res;
        vector<int> v;
        int idx = 0;
        solve(nums,res,v,idx,st);
        return res;
    }
};