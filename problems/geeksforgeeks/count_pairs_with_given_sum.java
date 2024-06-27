import java.util.HashMap;

public class count_pairs_with_given_sum{
  public static void main(String args[]){
    int arr[] = {1, 5, 7, 1};

    Solution obj = new Solution();
    int res = obj.getPairs(arr, 6);
    System.out.println("Counting Pairs with a Given Sum");
System.out.println("Result: " + res);
System.out.println("Time Complexity: O(n+m)");
System.out.println("Space Complexity: O(n)");
 }
}

class Solution{
  public int getPairs(int arr[], int k){
    HashMap<Integer, Integer> myhash = new HashMap<>();
    int pairs = 0;

    for(int i : arr){
      myhash.put(i, myhash.getOrDefault(i, 0)+1);
    }

    for(int i : arr){
      int x = k-i;
      pairs += myhash.getOrDefault(x, 0);
      if(i == x){
        pairs -= 1;
      }
    }
    return pairs/2;
  }
}
