#include <iostream>
#include <math.h>
int passThePillow(int n, int time) {
        if(n > time){
            return time+1;
        }
        
        int dir = ceil((float)time/(float)n);
        
        if(dir%2 != 0){
            return (time%(n-1)) + 1;
        }
        return n - (time%(n-1));
        
    }

int main(){
  std::cout << passThePillow(2, 341) << std::endl;
}
