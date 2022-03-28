// CodeChef Problem Code: DOWNLOAD
// Problem URL: https://www.codechef.com/problems/DOWNLOAD
// Author: Delta Shadow
// Version: 2
// Sample Test: 4 1 4 3 10 2 6 5 8 3 1 5 2 2 6 3 1 10 9

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TimeSlot {
    int start;
    int end;
    int visitedBy = -1;
};

typedef vector<TimeSlot> TimeSlots;

bool timeSlotComparator(TimeSlot A, TimeSlot B) {
    return (A.start < B.start);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    cin >> N;
    TimeSlots slots(N);
    for (int i = 0; i < N; i++) {
        int start, end;
        cin >> start >> end;
        slots[i].start = start; slots[i].end = end;
    }

    sort(slots.begin(), slots.end(), timeSlotComparator);

    int Q, q, K, k, count;
    cin >> Q;
    for (q = 0; q < Q; q++) {
        cin >> K;
        count = 0;
        for (int i = 0; i < K; i++) {
            cin >> k;
            for (TimeSlots::iterator slot = slots.begin(); slot != slots.end(); slot++) {
                if (slot->start > k)
                    break;
                if (slot->end > k && slot->visitedBy != q) {
                    slot->visitedBy = q;
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}