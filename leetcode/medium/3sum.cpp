#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<int>> threesum(vector<int>& nums){
  vector<vector<int>> result;


  unordered_map<int, int> hashmap;

  int n = nums.size();
  for(int i = 0; i<n; i++){
    hashmap[nums[i]] = i;
  }

  for(int i = 0; i<n-1; i++){
    for(int j = i+1; j<n; j++){
      int k = 0 - nums[i] - nums[j];

      if(hashmap.find(k) != hashmap.end() && hashmap[k] > j){
        result.push_back({nums[i], nums[j], k});
      }
    }
  }

  return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threesum(nums);

    cout << "Result:" << endl;
    for (auto triplet : result) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
