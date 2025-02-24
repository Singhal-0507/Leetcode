class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> res;
        int i=0;
        for(auto str:strs){
            sort(str.begin(),str.end());
            m[str].push_back(strs[i]);
            i++;
        }
        for(auto it:m){
            res.push_back(it.second);
        }
        return res;

    }
};