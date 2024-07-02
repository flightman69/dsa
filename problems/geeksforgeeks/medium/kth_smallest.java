import java.util.Arrays;

public class kth_smallest {
  public static void main(String[] args) {
    int[] arr = {7, 10, 4, 20, 15};
    int n = 5;
    int k = 4;
    Arrays.sort(arr, 0, n);
    int kthSmallest = arr[k-1];
    System.out.printf("The %dth smallest is %d\n", k, kthSmallest);
 
  }
}
