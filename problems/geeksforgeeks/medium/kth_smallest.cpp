#include <iostream>
#include <algorithm> // for std::sort

class Solution {
public:
    int kthSmallest(int arr[], int l, int r, int k) {
        std::sort(arr + l, arr + r + 1);
        return arr[k - 1];
    }
};

int main() {
    int n = 5;
    int arr[] = {7, 10, 4, 20, 15};
    int k = 4;

    Solution sol;
    int result = sol.kthSmallest(arr, 0, n - 1, k);

    std::cout << "The " << k << "th smallest element is: " << result << std::endl;

    return 0;
}

