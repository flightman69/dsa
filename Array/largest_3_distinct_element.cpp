#include <iostream>
void print_largest_3(int[], int);

int main(){
  int arr[100];
  int i = 0;
  do{
    std::cin >> arr[i];
    i++;
  } while(arr[i-1] != '\0');
  printf("The largest three numbers are: \n");
  int size = sizeof(arr)/sizeof(arr[0]);
  print_largest_3(arr,size);
}

void print_largest_3(int arr[], int size){
  if (size < 3){
    printf("Invalid array\n");
    return;
  }
  int first, second, third;
  first = second = third = arr[0];
  for (int i = 0; arr[i] != '\0'; i++){
    if(arr[i] > first){
      third = second;
      second = first;
      first = arr[i];
    } else if(arr[i] > second && arr[i] < first){
      third = second;
      second = arr[i];
    } else if(arr[i] > third && arr[i] < second){
      third = arr[i];
    }
  }

  printf("The three largest are %d %d %d\n", first, second, third);


}
