#include<iostream>

void merge(int[], int[], int, int);
int main(){
  int arr1[] = {1, 2, 3, 5, 8, 10};
  int arr2[] = {20, 15, 9, 13};

  int size1 = sizeof(arr1)/ sizeof(arr1[0]);
  int size2 = sizeof(arr2)/ sizeof(arr2[0]);

  merge(arr1, arr2,size1, size2);
  for(int i : arr1){
    std::cout << i << " ";
  }
  for(int i : arr2){
    std::cout << i << " ";
  }
  printf("\n");;
}

void merge(int arr1[], int arr2[], int size1, int size2){
  for(int i = 0; i < size2; i++){
    bool changed = false;
    for(int j = 0; j < size1; j++){
      if(arr2[i] < arr1[j]){
        int temp = arr2[i];
        arr2[i] = arr1[j];
        arr1[j] = temp;
        changed = true;
        break;
      }
    }
    if(changed){
      i -= 1;
    }
  }

  for(int i = 0; i < size2; i++){
    for(int j = 0; j<size2; j++ ){
      if(arr2[i] < arr2[j]){
        int temp = arr2[i];
        arr2[i] = arr2[j];
        arr2[j] = temp;
      }
    }
  }
}
