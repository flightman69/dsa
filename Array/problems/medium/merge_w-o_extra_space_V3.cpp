#include <iostream>
using namespace std;


void merge(int arr[], int brr[], int m, int n){
  for(int i = n-1; i >= 0; i--){
    int last = arr[m-1];
    int j;
    for(j = m -2; j >= 0 && arr[j] > brr[i]; j--){
      arr[j+1] = arr[j];
    }

    if (last > brr[i]){
      arr[j+1] = brr[i];
      brr[i] = last;
    }
  }
}

int main()
{
    int ar1[] = { 1, 5, 9, 10, 15, 20 };
    int ar2[] = { 2, 3, 8, 13 };
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
    merge(ar1, ar2, m, n);

    cout << "After Merging \nFirst Array: ";
    for (int i = 0; i < m; i++)
        cout << ar1[i] << " ";
    cout << "\nSecond Array: ";
    for (int i = 0; i < n; i++)
        cout << ar2[i] << " ";
    return 0;
}
