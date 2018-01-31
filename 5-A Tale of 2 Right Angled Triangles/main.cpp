// CodeChef Problem Code: TALETRI
// Problem URL: https://www.codechef.com/problems/TALETRI
// Author: Delta Shadow

#include <iostream>
#include <sstream>

using namespace std;

class AABB {
    private:
        int a_, b_, c_, d_, e_, f_, L_, R_; 
        int BB[8] = {0};
        int V[12] = {0};
    
    public:
        void setData(int a, int b, int c, int d, int e, int f, int L, int R) {
            a_ = a; b_ = b; c_ = c; 
            d_ = d; e_ = e; f_ = f; 
            L_ = L; R_ = R; 

            BB[0] = L_;      BB[1] = R_;
            BB[2] = 0;       BB[3] = R_;
            BB[4] = 0;       BB[5] = 0;
            BB[6] = L_;      BB[7] = 0;

            V[4] = BB[4];    V[5] = BB[5];
            V[10] = BB[0];   V[11] = BB[1];
        }

        string getData() {
            stringstream ss;
            for (int i = 0; i < 12; i += 2) {
                ss << V[i];
                ss << " ";
                ss << V[i+1];
                if (i != 10) {ss << "\n";}
            }
            return ss.str();
       }

        bool solve() {
            if (a_ <= L_ && b_ <= R_) {
                V[2] = V[4] + a_;    V[3] = V[5];
                V[0] = V[4];         V[1] = V[5] + b_;
            } else if (a_ <= R_ && b_ <= L_) {
                V[2] = V[4];         V[3] = V[5] + a_;
                V[0] = V[4] + b_;    V[1] = V[5];
            } else {
                return false;
            }

            if (d_ <= L_ && e_ <= R_) {
                V[8] = V[10] - d_;   V[9] = V[11];
                V[6] = V[10];        V[7] = V[11] - e_;
            } else if (d_ <= R_ && e_ <= L_) {
                V[8] = V[10];        V[9] = V[11] - d_;
                V[6] = V[10] - e_;   V[7] = V[11];
            } else {
                return false;
            }

            return true;
        }
};

int main() {
    ios::sync_with_stdio(false);

    int T(0), a(0), b(0), c(0), d(0), e(0), f(0), L(0), R(0);

    cin >> T;
    AABB aabbs[T];

    for (int i = 0; i < T; i++) {
        cin >> a >> b >> c >> d >> e >> f >> L >> R;
        aabbs[i].setData(a, b, c, d, e, f, L, R);
    }

    for (int i = 0; i < T; i++) {
        if (aabbs[i].solve()) {
            cout << aabbs[i].getData() << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
