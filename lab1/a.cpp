#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;

        deque<int> dq;
   
        for (int i = n; i >= 1; i--) {
            dq.push_front(i);         
            for (int j = 0; j < i; j++) {  
                int x = dq.back();
                dq.pop_back();
                dq.push_front(x);
            }
        }

        // вывод результата
        for (int i = 0; i < n; i++) {
            cout << dq[i] << (i + 1 == n ? '\n' : ' ');
        }
    }
    return 0;
}

