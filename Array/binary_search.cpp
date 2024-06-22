#include <iostream>

int binary_search(int arr[], int low, int high, int search_element){
  if(high >= low){
    int mid = low + (high - low)/2;

    if(search_element == arr[mid])
      return mid;
    if(search_element < arr[mid])
      return binary_search(arr, low, mid-1, search_element);
    if (search_element > arr[mid])
      return binary_search(arr, mid+1, high, search_element);
  }

  return -1;
}
int main() {
  int arr[] = {1, 5, 6, 7, 9, 10, 11, 12, 16, 21, 23, 24, 26, 27, 28, 29, 30, 32, 34, 35, 36, 37, 38, 40, 41, 43, 44, 45, 47, 49, 50, 54, 55, 56, 57, 61, 62, 65, 66, 67, 68, 69, 71, 72, 74, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};

  std::cout << "Enter the number: ";
  int search_element;
  std::cin >> search_element;
  int size = sizeof(arr)/sizeof(arr[0]);
  int res = binary_search(arr, 0, size-1, search_element);
  (res == -1)
    ? printf("Element not found in the array\n")
    : printf("Element found at the position %d\n", res);

  return 0;

}
