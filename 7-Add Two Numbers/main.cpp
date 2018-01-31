// CodeChef Problem Code: FLOW001
// Problem URL: https://www.codechef.com/problems/FLOW001
// Author: Delta Shadow

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int T(0);
    cin >> T;
    int answers[T] = {};

    for (int i = 0; i < T; i++) {
        int a(0), b(0);
        cin >> a >> b;
        answers[i] = a + b;
    }

    for (int i = 0; i < T; i++) {
        cout << answers[i] << endl;
    }

    return 0;
}
