#include <iostream>     // для cin, cout
#include <vector>       // для vector
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++) {
        long long l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if ((l1 <= a[j] && a[j] <= r1) || (l2 <= a[j] && a[j] <= r2)) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
