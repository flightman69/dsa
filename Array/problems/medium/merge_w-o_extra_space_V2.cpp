#include <iostream>

void shift(int arr[], int size, int high, int val){
  int top = size - 1;
  for(int i = top; i > high; i--){
    arr[i] = arr[i-1];
  }
  arr[high] = val;
}

int find_high(int a[], int s1, int val){
  for(int i = 0; i < s1; i++){
    if (a[i] > val){
      int last = a[s1-1];
      int high = i;
      shift(a, s1, high, val);
      return last;
    }
  }
}

void merge(int a[], int b[], int s1, int s2){
  for(int i = s2-1; i>=0; i--){
    int val = b[i];
    int replace = find_high(a, s1, val);
    b[i] = replace;
  }
}
void print(int arr[], int size){
  for(int i = 0; i < size; i++){
    std::cout << arr[i] << " ";
  }
  printf("\n");
}
int main(){
  int a[] = {1, 5, 9, 10, 15, 20};
  int b[] = {2, 3, 8, 13};

  int s1 = sizeof(a)/sizeof(a[0]);
  int s2 = sizeof(b)/sizeof(b[0]);

  merge(a, b, s1, s2);

  print(a, s1);
  print(b, s2);
}
