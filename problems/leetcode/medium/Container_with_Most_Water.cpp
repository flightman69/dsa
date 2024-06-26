/* Two Pointer Solution
 * O(N)
 * Medium
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
    
        int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right){
           int area;
           area = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, area);

            if(height[left] < height[right]){
                left++;
            } else {
                right--;
            }
        }
        
        return maxArea;
    }
};
