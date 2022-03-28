// CodeChef Problem Code: ICL1701
// Problem URL: https://www.codechef.com/problems/ICL1701
// Author: Delta Shadow

#include <iostream>
#include <list>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    list<int> results;
    bool shouldFlip = false;

    for (int i = 1; i <= N; i++) {
        int n;
        cin >> n;
        if (n < 0) shouldFlip = !shouldFlip;
        if (shouldFlip) results.push_back(i);
    }

    cout << results.size() << endl;
    for (list<int>::iterator i = results.begin(); i != results.end(); i++) {
        cout << *i << " ";
    }

    return 0;
}
