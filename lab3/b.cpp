#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool canSplit(const vector<long long>& a, int k, long long limit) {
    long long cur = 0;
    int parts = 1;
    for (long long x : a) {
        if (x > limit) return false;
        if (cur + x <= limit) cur += x;
        else {
            parts++;
            cur = x;
            if (parts > k) return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long lo = *max_element(a.begin(), a.end());
    long long hi = accumulate(a.begin(), a.end(), 0LL);

    while (lo < hi) {
        long long mid = (lo + hi) / 2;
        if (canSplit(a, k, mid)) hi = mid;
        else lo = mid + 1;
    }

    cout << lo << "\n";
    return 0;
}
