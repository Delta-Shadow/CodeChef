// CodeChef Problem Code: ICL1801
// Problem URL: https://www.codechef.com/problems/ICL1801
// Author: Delta Shadow

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N, M;
        cin >> N >> M;
        vector<int> nums;

        for (int j = 0; j < N*M; j++) {
            int num;
            cin >> num;
            nums.push_back(num);
        }

        sort(nums.begin(), nums.end(), greater<int>());
        
        int cyborgSum(0), genoSum(0);
        for (int i = 0; i < nums.size(); i++)
            if (i % 2 == 0) cyborgSum += nums[i]; else genoSum += nums[i];

        string winner;
        if (cyborgSum > genoSum) winner = "Cyborg";
        else if (cyborgSum < genoSum) winner = "Geno";
        else winner = "Draw";

        cout << winner << endl;
    }

    return 0;
}
