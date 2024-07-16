#include <iostream>

int find_minimum_platform(int arr[], int dep[], int n){
  int total_plats = 0;
  for(int i = 0; i < n-1; i++){
    int temp_plats = 0;
    int j = i;
    while(arr[j+1] < dep[i]){
      temp_plats++;
      j++;
    }
    total_plats = std::max(temp_plats, total_plats);
  }
  return total_plats+1;
}
int main(){
  int arr[] = {900, 940, 950, 1100, 1500, 1800};
  int dep[] = {910, 1200, 1120, 1130, 1900, 2000};

  int n = 6;

  int res = find_minimum_platform(arr, dep, n);
  printf("The %d\n", res);
}

