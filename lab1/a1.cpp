/*
#include <iostream>
#include <vector>
#include <deque>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector <int> numbers(n);
    for (int i = 0; i < n; i++){
        int z;
        cin >> z;
        numbers[i] = z;
    }
    
    for (int i = 0; i < n; i ++){
        vector <int> a;
        int x = numbers[i];
        for (int j = x; j != 0; j--){
            if (j != x){
                int z;
                z = a.back();
                a.pop_back();
                a.insert(a.begin(), z);
                a.insert(a.begin(), j);
            }
            else {
                a.insert(a.begin(), j);
            }
        }

        for (int q = 0; q < a.size(); q++){
            cout << a[q] << " ";
        }
        cout << endl;
    }
    return 0;
} */



#include <iostream>
#include <deque>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        deque<int> dq;
        for(int i = n; i >= 1; i--) {
            dq.push_front(i);
            int r = i % dq.size();
            for(int j = 0; j < r; j++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
        for(int x : dq) cout << x << " ";
        cout << endl;
    }
    return 0;
}