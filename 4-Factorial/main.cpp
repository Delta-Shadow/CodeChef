// CodeChef Problem Code: FCTRL
// Problem URL: https://www.codechef.com/problems/FCTRL
// Author: Delta Shadow

#include <iostream>
#include <cmath>

using namespace std;

int Z(int);

int main() {
    ios::sync_with_stdio(false);
    unsigned int t(0), input(0);

    cin >> t;
    int results[t];

    for (int i = 0; i < t; i++) {
        cin >> input;
        results[i] = Z(input);
    }

    for (int i = 0; i < t; i++) {
        cout << results[i] << endl;
    }

    return 0;
}

int Z(int n) {
    int count(0);
    int i = 1;

    while(true) {
        int val = n / pow(5, i);
        if (val < 1) break;
        count += val;
        i++;
    }

    return count;
}
