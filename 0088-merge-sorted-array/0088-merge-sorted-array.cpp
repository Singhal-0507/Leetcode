class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int i = m-1,j=n-1,last=m+n-1;
        while(i>=0 && j>=0){
            if(num1[i] > num2[j]){
                num1[last] = num1[i];
                i--;
            }else{
                num1[last] = num2[j];
                j--;
            }
            last--;
        }
        while(j>=0){
            num1[last--] = num2[j--];
        }
    
    }
};