#include <iostream>
#include <unordered_map>
#include <climits>

class Solution{
  public:
    int getPairsCount(int arr[], int n, int k){
      int pairs = 0;
      std::unordered_map<int, int> mymap;

      for(int i = 0; i < n; i++){
        mymap[arr[i]]++;
      }
      
      for(int i = 0; i < n; i++){
        int x = k-arr[i];
        pairs += mymap[x];
        if(x == arr[i]){
          pairs -= 1;
        }
      }
      return pairs/2;
    }
};

int main(){
  Solution obj;
  int arr[] = {1, 5, 7, 1};
  int res = obj.getPairsCount(arr, 4, 6);
  printf("Counting Pairs with a Given Sum\n");
  printf("Result: %d\n", res);
  std::cout << "Time Complexity: O(n+m)" << std::endl;
  std::cout << "Space Complexity: O(n)" << std::endl;
}
