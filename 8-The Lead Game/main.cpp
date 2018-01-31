// CodeChef Problem Code: TLG
// Problem URL: https://www.codechef.com/problems/TLG
// Author: Delta Shadow

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int N(0), W(0), L(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        int a, b, l;
        cin >> a >> b;
        l = a - b;
        if (abs(l) > L) {
            L = abs(l);
            if (l > 0) {W = 1;} else {W = 2;}
        }
    }

    cout << W << " " << L << endl;

    return 0;
}
