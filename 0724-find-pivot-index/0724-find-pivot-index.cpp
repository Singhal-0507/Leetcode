class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n,0),right(n,0);
        left[0] = 0;
        for(int j=1;j<n;j++){
            left[j] = left[j-1] + nums[j-1];
        }
        for(int j=n-1;j>=0;j--){
            if (j == n-1){
                right[j] = 0;
                continue;
            }
            right[j] = right[j+1] + nums[j+1];
        }
        for(int k=0;k<n;k++){
            if(left[k] == right[k]) return k;
        }
        return -1;

    }
};