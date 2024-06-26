import java.util.HashSet;
public class subset_or_not {
  public static boolean IsSubset(int arr1[], int arr2[]) {
    HashSet<Integer> hashset = new HashSet<>();

    for(int i : arr1){
      hashset.add(i);
    }

    for(int i : arr2){
      if (!hashset.contains(i)){
        return false;
      }
    }
    return true;
  }
  public static void main(String[] args) {
    
    System.out.println("Find subset or not using hash set");
    System.out.println("Time Comp: \nInsertion: O(N)\nLookup: O(N)\nOverall: O(N+M)");
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int arr2[] = {11, 3, 7, 1};

    boolean res = IsSubset(arr1, arr2);
    if(res){
      System.out.println("It is a subset");
    } else {
      System.out.println("It is not a subset"); 
    }

  }
}
