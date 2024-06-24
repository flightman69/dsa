#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = height.size();
    vector<int> vec;

    printf("Size of height vector: %d\n", size);
    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            // Calculate the area and push to vec
            int area = min(height[i], height[j]) * (j - i);
            vec.push_back(area);
        }
    }

    int max_area = 0;
    
    // Find the maximum area in vec
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] > max_area) {
            max_area = vec[i];
        }
    }

    printf("Max area: %d\n", max_area);

    return 0;
}

