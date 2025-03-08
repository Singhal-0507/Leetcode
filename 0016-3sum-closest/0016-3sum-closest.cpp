class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closestSum = INT_MAX/2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int left = i+1,right=nums.size()-1;
            
            while(left<right){
                int currSum = nums[i]+nums[left]+nums[right];
                if(abs(currSum - target) < abs(closestSum - target)){
                    closestSum = currSum;
                }
                else if(currSum  < target) left++;
                else if(currSum  > target) right--;
                else return currSum ;
            }
        }
        return closestSum;
    }
};