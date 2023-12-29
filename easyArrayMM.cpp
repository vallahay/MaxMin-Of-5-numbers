#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    array<int, 5> a;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    int minNum = *min_element(a.begin(), a.end());
    int maxNum = *max_element(a.begin(), a.end());
    cout << minNum << endl;
    cout << maxNum << endl;
    return 0;
}