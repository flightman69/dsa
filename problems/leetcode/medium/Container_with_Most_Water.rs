impl Solution{
    pub fn max_area(height: Vec<i32>) -> i32 {
        let mut left = 0;
        let mut right = height.len() - 1;
        let mut maxArea;

        while (left < right){
            let area = std::cmp::min(height[right], height[left]) * (right - left);
            maxArea = std::cmp::max(maxArea, area);

            if(height[left] < height[right]){
                left++;
            } else {
                right--;
            }
        }
        maxArea
    }
}
