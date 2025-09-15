#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;  
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> freq; 
    for (int x : a) {
        freq[x]++;
    }

    int maxFreq = 0;
    for (auto &p : freq) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
        }
    }

   
    vector<int> modes;
    for (auto &p : freq) {
        if (p.second == maxFreq) {
            modes.push_back(p.first);
        }
    }

    sort(modes.rbegin(), modes.rend());

   
    for (int x : modes) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
