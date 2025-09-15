#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        int z;
        cin >> z;
        a[i] = z;
    }
    int x;
    cin >> x;
    int q = 0;
    int w = abs(a[0] - x);
    for (int i = 1; i < n; i++){
        if (abs(a[i] - x) < w){
            w = abs(a[i] - x);
            q = i;
        }
    }
    cout << q;
    return 0;
}