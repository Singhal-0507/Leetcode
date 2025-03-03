class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0,j=height.size()-1,water = INT_MIN;
        while(i<j){
            int curr = min(height[i],height[j])*(j-i);
            water = max(water,curr);
            (height[i] < height[j])? i++:j--;
        }
        return water;
    }
};