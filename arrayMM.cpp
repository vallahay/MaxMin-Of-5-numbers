#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 5;

void print_min(const int nums[]) {
    int minNum = *min_element(nums, nums + SIZE);
    cout << minNum << endl;
}

void print_max(const int nums[]) {
    int maxNum = *max_element(nums, nums + SIZE);
    cout << maxNum << endl;
}

int main() {
    int nums[SIZE]; 
    
    for (int i = 0; i < SIZE; i++) {
        cin >> nums[i];
    }
    
    print_min(nums);
    print_max(nums);

    return 0;
}