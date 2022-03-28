// CodeChef Problem Code: DOWNLOAD
// Problem URL: https://www.codechef.com/problems/DOWNLOAD
// Author: Delta Shadow

#include <iostream>
#include <vector>

using namespace std;

struct TimeSlot {
    int start;
    int end;
    int visitedBy = -1;

    void init(int s, int e) {
        start = s; end = e; visitedBy = -1;
    }

    bool contains(int k) {
        return (k >= start && k <= end);
    }
};

typedef vector<TimeSlot> TimeSlots;

int main() {
    std::ios::sync_with_stdio(false);

    int N;
    cin >> N;
    TimeSlots slots(N);
    for (int i = 0; i < N; i++) {
        int start, end;
        cin >> start >> end;
        slots[i].init(start, end);
    }

    int Q, q, K, k, count;
    cin >> Q;
    for (q = 0; q < Q; q++) {
        cin >> K;
        count = 0;
        for (int i = 0; i < K; i++) {
            cin >> k;
            for (TimeSlots::iterator slot = slots.begin(); slot != slots.end(); slot++) {
                if (slot->contains(k) && slot->visitedBy != q) {
                    slot->visitedBy = q;
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}