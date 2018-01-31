// CodeChef Problem Code: HS08TEST
// Problem URL: https://www.codechef.com/problems/HS08TEST
// Author: Delta Shadow

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float balance(0);
    int amount(0);

    cin >> amount >> balance;

    if (amount + 0.50 < balance && amount % 5 == 0) {
        cout << (balance - amount) - 0.50 << endl;
    } else {
        cout << balance << endl;
    }

    return 0;
}
