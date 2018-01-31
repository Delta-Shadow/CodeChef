// CodeChef Problem Code: INTEST
// Problem URL: https://www.codechef.com/problems/INTEST/
// Author: Delta Shadow

#include <iostream>

using namespace std;

int main() {
    unsigned int n = 0, k = 0, t = 0, count = 0;

    std::ios::sync_with_stdio(false);

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t % k == 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
