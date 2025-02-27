class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,count =0,maxf=INT_MIN,res=INT_MIN;
        unordered_map<char,int> m;
        for(int j=0;j<s.size();j++){
            m[s[j]]++;
            maxf = max(maxf,m[s[j]]);
            count = j-i+1 - maxf;
            if(count > k){    
                m[s[i]]-=1;    
                i++;
                count =j-i+1-maxf;
            }
            res = max(res,j-i+1);
        }
        return res;
    }
};