public class largest_3_distinct_element {
  public static void Print3Largest(int arr[], int size){
    if(size < 3){
      System.out.println("Invalid array");
      return;
    }
    int first, second, third;
    first = second = third = arr[0];
    for(int i = 0; i < size; i++){
      if(first < arr[i]){
        third = second;
        second = first;
        first = arr[i];
      } else if (second < arr[i]){
        third = second;
        second = arr[i];
      } else if (third < arr[i]){
        third = arr[i];
      }
    }

    System.out.printf("%d %d %d\n", first, second, third);

  }
  public static void main(String[] args) {
    int arr[] = {12, 13, 1, 10, 34, 1};
    Print3Largest(arr, arr.length);
  }
}
