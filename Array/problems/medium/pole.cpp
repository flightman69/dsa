#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int size = height.size();
    vector<int> vec;
        for(int i = 0; i < size; i++){
            for(int j = i+1; j < size; j++){
                int area = min(height[i], height[j]) * (j-i);
                vec.push_back(area);
            }
        }
        int max = 0;
        
        for(int i = 0; i < vec.size(); i++){

            if (vec[i] > max){
                max = vec[i];
            }
        }
        printf("%d\n", max);
    
}
