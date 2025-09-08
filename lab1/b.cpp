#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[i]= x;
    }
    for (int i = 0; i < n; i++){
        int z = a[i];
        int q = -1;
        for (int j = i-1; j >= 0; j--){
            if (z >= a[j]){
                q = a[j];
                break;
            }
        }
        if (q != -1){
            cout << q << " ";
        }
        else {
            cout << "-1 ";
        }
    }
    return 0;
}