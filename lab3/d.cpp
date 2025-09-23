#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countInRange(const vector<long long>& a, long long l, long long r) {
    return upper_bound(a.begin(), a.end(), r) - lower_bound(a.begin(), a.end(), l);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    while (q--) {
        long long l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        int c1 = countInRange(a, l1, r1);
        int c2 = countInRange(a, l2, r2);

        int c12 = 0;
        if (max(l1, l2) <= min(r1, r2)) {
            c12 = countInRange(a, max(l1, l2), min(r1, r2));
        }

        cout << (c1 + c2 - c12) << "\n";
    }

    return 0;
}
