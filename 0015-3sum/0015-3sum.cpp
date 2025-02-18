class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int low, high;
        vector<int> v;
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size()-1; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int j = i + 1;
            low = j;
            high = nums.size() - 1;
            while (low < high) {
                if (nums[i] + nums[low] + nums[high] == 0) {
                    v = {nums[i], nums[low], nums[high]};
                    ans.push_back(v);
                    while (low < high && nums[low] == nums[low + 1]) low++;
                    while (low < high && nums[high] == nums[high - 1]) high--;
                    low++;
                    high--;
                } else if (nums[i] + nums[low] + nums[high] > 0) {
                    high--;
                } else {
                    low++;
                }
            }
            
        }
        return ans;
    }
};