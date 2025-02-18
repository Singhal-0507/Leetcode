class Solution {
public:
    void solve(int n,vector<string> &res,int lastPlace,string str){
        if (n == 0){
            res.push_back(str);
            return;
        }
        
        solve(n-1,res,1,str +"1");
        if (lastPlace == 1){
            solve(n-1,res,0,str+"0");
        }
        
    }
    vector<string> validStrings(int n) {
        vector<string> res;
        int l = 1;
        string str = "";
        solve(n,res,l,str);
        return res;
    }
};