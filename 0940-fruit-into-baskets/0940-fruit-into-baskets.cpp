class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0,res=0,count=0;
        unordered_map<int,int> m;
        for(int j=0;j<fruits.size();j++){
            m[fruits[j]]++;
            if(m.size() > 2){
                if(m[fruits[i]] == 1) m.erase(fruits[i]);
                else m[fruits[i]]--;
                i++;
            }
            res=max(res,j-i+1);
        }
        return res;
    }
};