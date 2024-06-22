import java.util.Scanner;

public class linear_search{
  public static int LinearSearch(int arr[], int size, int search_element){
    for(int i = 0; i < size; i++){
      if(arr[i] == search_element)
        return i;
    }
    return -1;
  }
  public static void main(String args[]){
    Scanner scanner = new Scanner(System.in);
    
    int arr[] = {3, 4, 6, 7, 8, 9, 10, 14, 15, 17, 20, 23, 24, 25, 26, 27, 28, 30, 31, 32, 33, 34, 38, 39, 40, 41, 42, 43, 46, 47, 48, 49, 51, 54, 55, 56, 57, 59, 61, 63, 64, 65, 66, 68, 69, 70, 75, 76, 78, 80, 81, 83, 84, 85, 86, 89, 90, 91, 93, 94, 95, 96, 98, 99};

    System.out.print("[Linear Search Algorithm in Java]\nWorse Case O(N)\nAverage Case O(N)\nBest Case O(1)\n");
    System.out.print("Enter the number: ");
    int user_input = scanner.nextInt();
    int res = LinearSearch(arr, arr.length, user_input);
    if(res == -1){
      System.out.println("Element not found in the array");
    } else {
      System.out.println("Element found at the position " + res);
    }
  }
}
