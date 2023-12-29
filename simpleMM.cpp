#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    int minNum, maxNum;
    minNum = std::min({num1, num2, num3, num4, num5});
    maxNum = std::max({num1, num2, num3, num4, num5});

    cout << minNum << endl;
    cout << maxNum << endl;

    return 0;
}