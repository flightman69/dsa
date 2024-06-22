#include<iostream>

int linear_search(int arr[], int size, int search_element) {
  for(int i = 0; i < size; i++){
    if(arr[i] == search_element) 
      return i; // return index of search_element;
  }
  return -1; // return -1 if search_element not found;
}


int main(){
  int arr[] = {3, 4, 6, 7, 8, 9, 10, 14, 15, 17, 20, 23, 24, 25, 26, 27, 28, 30, 31, 32, 33, 34, 38, 39, 40, 41, 42, 43, 46, 47, 48, 49, 51, 54, 55, 56, 57, 59, 61, 63, 64, 65, 66, 68, 69, 70, 75, 76, 78, 80, 81, 83, 84, 85, 86, 89, 90, 91, 93, 94, 95, 96, 98, 99};

  int user_input;
  std::cout << "[Linear Search Algorithm in C++]\nWorse Case O(N)\nAverage Case O(N)\nBest Case O(1)\n";
  std::cout << "Enter the number: ";
  std::cin >> user_input;
  int array_size = sizeof(arr)/sizeof(arr[0]);
  int res = linear_search(arr, array_size, user_input);

  if (res == -1){
    std::cout << "Element is not in the array\n";
  } else {
    std::cout << "The position of the element in the list is " << res << std::endl;
  }

 return 0; 

}
