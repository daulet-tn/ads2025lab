#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 5;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < 10; i++){
        if (i < 5){
            int x;
            cin >> x;
            a[i] = x;
        }
        else {
            int z;
            cin >> z;
            b[i - 5] = z;
        }
    }
    int i = 0;
    while (a.back() != -1|| b.back() != -1){
        
        int x = a[i];
        int z = b[i];
        if ((a[i] != 0 && b[i]!= 9) || (a[i] != 9 && b[i] != 0)){
            if (a[i] > b[i]){
                a.push_back(x);
                a.push_back(z);
                a[i] = -1;
                b[i] = -1;
            }
            else {
                b.push_back(x);
                b.push_back(z);
                a[i] = -1;
                b[i] = -1;
            }
        }
        else{
            if (a[i] == 0){
                a.push_back(x);
                a.push_back(z);
                a[i] = -1;
                b[i] = -1;
            }
            else {
                b.push_back(x);
                b.push_back(z);
                a[i] = -1;
                b[i] = -1;
            }
        }
        i = i + 1;
    }
    if (a.back() != -1){
        cout << "Nursik " << i << endl;
    }
    else {
        cout << "Boris" << i << endl;
    }
    return 0;
}