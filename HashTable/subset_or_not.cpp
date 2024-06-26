#include <iostream>
#include <unordered_set>

bool is_subset(int arr1[], int arr2[], int s1, int s2){
  std::unordered_set<int> hash_set;
  for(int i = 0; i < s1; i++){
    hash_set.insert(arr1[i]);
  }

  for(int i = 0; i < s2; i++){
    if(hash_set.find(arr2[i]) == hash_set.end()){
      return false;
    }
  }
  return true;
}

int main(){
  int arr1[] = {11, 1, 13, 21, 3, 7};
  int arr2[] = {11, 3, 7, 1};
  
  int s1= sizeof(arr1)/sizeof(arr1[0]);
  int s2= sizeof(arr2)/sizeof(arr2[0]);

  bool res = is_subset(arr1, arr2, s1, s2);
  if(res){
    printf("arr2[] is a subset of arr1[]\n");
  } else {
    printf("arr2[] is not a subset of arr1[]\n");

  }
  return 0;
}
