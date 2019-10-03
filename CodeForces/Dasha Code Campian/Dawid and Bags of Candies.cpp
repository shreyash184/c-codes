#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int a[4];
    int s = 0;
    for (int i = 0; i < 4; ++i) {
        cin >> a[i];
        s += a[i];
    }
    for(int i = 0; i < 16; ++i) {
        int cur = 0;
        for (int j = 0; j < 4; ++j)
            if ((i & (1 << j)) > 0)
                cur += a[j];
        if (cur * 2 == s) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}