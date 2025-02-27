class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (n == 0) return 0;
        int i=0,res=0;
        unordered_map<char,int> m;
        for(int j=0;j<n;j++){
            m[s[j]]++;
            while(m[s[j]] > 1){
                m[s[i]]--;
                i++;
            }
            res = max(res,j-i+1);
        }
        return res;
    }
};