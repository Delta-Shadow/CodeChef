// CodeChef Problem Code: MUFFINS3
// Problem URL: https://www.codechef.com/problems/MUFFINS3
// Author: Delta Shadow

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int T(0);
    cin >> T;
    int sizes[T] = {};

    for (int i = 0; i < T; i++) {
        int n(0);
        cin >> n;
        if (n % 2 == 0) {
            sizes[i] = (n / 2) + 1;
        } else {
            sizes[i] = (n + 1) / 2;
        }
    }

    for (int i = 0; i < T; i++) {
        cout << sizes[i] << endl;
    }

    return 0;
}
