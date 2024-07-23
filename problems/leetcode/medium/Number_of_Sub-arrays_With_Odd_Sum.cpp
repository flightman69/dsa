#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    void sub(vector<int> &nums, int i, vector<int> temp){
        if(i == nums.size()){
            ans.push_back(temp);
            return;
        }

        sub(nums, i+1, temp);
        temp.push_back(nums[i]);
        sub(nums, i+1, temp);
    }

    int numOfSubarrays(vector<int>& arr) {
        vector<vector<int>> res = subsets(arr);
        int size = res.size();
        int finalRes = findOddSum(res);

        return finalRes;
    }

    int findOddSum(vector<vector<int>>& arr){
        int oddSubsetsCount = 0;
        for (auto& subset : arr){
             int val = std::accumulate(subset.begin(), subset.end(), 0);
             if(val%2 != 0){
                cout << "[ ";
                for (int num : subset) {
                    cout << num << " ";
                }
                cout << "]" << endl;

                oddSubsetsCount++;
             }
        }
        return oddSubsetsCount;
    }

    vector<vector<int>> subsets(vector<int>& nums){
        vector<int> temp;
        sub(nums, 0, temp);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> testArray = {1, 2, 3, 4, 5, 6, 7};  // Example test array
    int result = solution.numOfSubarrays(testArray);

    cout << "Number of odd subarrays: " << result << endl;

    // Optional: Print all subsets
    // Solution sol2;
    // vector<vector<int>> subsets = sol2.subsets(testArray);
    // int size = subsets.size();
    // printf("Size %d\n", size);
    // cout << "Subsets: " << endl;
    // for (const auto& subset : subsets) {
    //     cout << "[ ";
    //     for (int num : subset) {
    //         cout << num << " ";
    //     }
    //     cout << "]" << endl;
    // }

    return 0;
}

