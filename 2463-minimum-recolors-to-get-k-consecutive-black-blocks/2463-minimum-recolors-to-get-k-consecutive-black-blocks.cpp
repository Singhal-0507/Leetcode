class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i =0;
        int n = blocks.size();
        int res = INT_MAX,count = 0;
        for(int j=0;j<n;j++){
            if(blocks[j] == 'W'){
                count++;
            }
            
            if(j-i+1 > k){
                if(blocks[i] == 'W'){
                    count--;
                }
                i++;
            }
            if(j-i+1 == k){
                res=min(res,count);
            }
        }
        return res;
    }
};