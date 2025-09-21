#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int q; 
    cin >> q;
    vector<int> a(q);
    for (int i = 0; i < q; i++) {
        cin >> a[i];
    }

    int n, m;
    cin >> n >> m;
    vector<vector<int>> b(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    unordered_map<int, pair<int,int>> pos;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                pos[b[i][j]] = {i, j};
            }
        } else {
            for (int j = m - 1; j >= 0; j--) {
                pos[b[i][j]] = {i, j};
            }
        }
    }

    for (int val : a) {
        if (pos.count(val)) {
            cout << pos[val].first << " " << pos[val].second << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
