#include <iostream>

int find_missing(int arr[], int size){
  int largest = arr[0];
  int sum = 0;
  for(int i = 0; i < size; i++){
    if (largest < arr[i])
      largest = arr[i];
    sum += arr[i];
  }

  return (largest * (largest+1))/2 - sum;

}

int main(){
  printf("[Find missing in Array]\nTime Comp: O(N)\n");
  int arr[] = { 1, 3, 7, 5, 6, 2 };
  int size = sizeof(arr)/sizeof(arr[0]);
  int missing = find_missing(arr, size);
  printf("The missing number is: %d\n", missing);

}
