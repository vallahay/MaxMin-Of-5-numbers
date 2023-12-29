#include <iostream>
#include <algorithm>

using namespace std;

int minNum, maxNum;
void print_min(int num1, int num2, int num3, int num4, int num5){
    minNum = min({num1, num2, num3, num4, num5});
    cout << minNum << endl;
}
void print_max(int num1, int num2, int num3, int num4, int num5){
    maxNum = max({num1, num2, num3, num4, num5});
    cout << maxNum << endl;
}

int main() {
    int num1, num2, num3, num4, num5;
    cin >> num1 >> num2 >> num3 >> num4 >> num5; 
    print_min(num1, num2, num3, num4, num5);
    print_max(num1, num2, num3, num4, num5);

    return 0;
}