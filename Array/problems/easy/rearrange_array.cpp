#include<iostream>

void rearrange(int arr[], int size){
  int arr2[size];
  for(int i = 0; i < size; i++){
    if ((0 <= arr[i]) && (arr[i] < size))
      arr2[arr[i]] = arr[i];

    if(arr2[i] != i)
      arr2[i] = -1;
  }

  for(int i:arr2)
    printf("%d ", i);
  printf("\n");
}
int main(){
  int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
  int size = sizeof(arr)/sizeof(arr[0]);
  rearrange(arr, size);
  return 0;
}
