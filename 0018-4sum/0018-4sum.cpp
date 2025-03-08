class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> v;
        set<vector<int>> st;
        int n = nums.size();
        
        for(int i = 0; i < n - 3; i++) {
            for(int j = i + 1; j < n - 2; j++) {
                int low = j + 1, high = n - 1;
                while(low < high) {
                    // Use long long to avoid overflow
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[low] + (long long)nums[high];
                    
                    if(sum == target) {
                        v = {nums[i], nums[j], nums[low], nums[high]};
                        sort(v.begin(), v.end());
                        if(st.find(v) == st.end()) {
                            res.push_back(v);
                        }
                        st.insert(v);
                        low++;
                        high--;
                    } else if(sum > target) {
                        high--;
                    } else {
                        low++;
                    }
                }
            }
        }
        return res;
    }
};
