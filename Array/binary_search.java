import java.util.Scanner;

public class binary_search{
  public static int BinarySearch(int arr[], int low, int high, int search_element) {
    if(high >= low){
      int mid = low + (high - low);

      if(arr[mid] == search_element){
        return mid;
      }

      if(arr[mid] > search_element){
        return BinarySearch(arr, low, mid-1, search_element);
      }

      return BinarySearch(arr, mid+1, high, search_element);
    }

    return -1;
  }
  public static void main(String args[]){
      int arr[] = {1, 5, 6, 7, 9, 10, 11, 12, 16, 21, 23, 24, 26, 27, 28, 29, 30, 32, 34, 35, 36, 37, 38, 40, 41, 43, 44, 45, 47, 49, 50, 54, 55, 56, 57, 61, 62, 65, 66, 67, 68, 69, 71, 72, 74, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};

  

  Scanner scanner = new Scanner(System.in);
  System.out.print("Enter the number: ");
  int search_element = scanner.nextInt();

  int res = BinarySearch(arr, 0, arr.length -1, search_element);

  if (res == -1){
    System.out.println("Element not found in the array");
  } else {
    System.out.println("Element is found at the position " + res);
  }
  }
}
