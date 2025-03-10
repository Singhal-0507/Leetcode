class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if (i>0 && nums[i] == nums[i-1] ) continue;
            int low = i+1,high = nums.size()-1;
            while(low < high){
                int sum = nums[i] + nums[low] + nums[high];
                if (sum == 0){
                    vector<int> triplet = {nums[i],nums[low],nums[high]};
                    res.push_back(triplet);
                    while(low < high && nums[low] == nums[low+1]) low++;
                    while(low < high && nums[high] == nums[high-1]) high--;
                    low++;
                    high--;
                }else if(sum<0){
                    low++;
                }else{
                    high--;
                }
            }

        }
        return res;
    }
};
