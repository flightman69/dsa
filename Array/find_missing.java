public class find_missing {
  public static int FindMissing(int arr[]) {
    int sum = 0;
    int largest = arr[0];
    for (int i = 0; i < arr.length; i++){
      if (largest < arr[i]){
        largest = arr[i];
      }
      sum += arr[i];
    }

    return (largest * (largest+1)/2) - sum;
  }
  public static void main(String[] args) {
    System.out.println("[Find Missing Element]\nTime Comp: O(N)");
    int arr[] = { 1, 3, 7, 5, 6, 2 };
    int missing = FindMissing(arr);
    System.out.println("The missing element is " + missing);
  }
}
