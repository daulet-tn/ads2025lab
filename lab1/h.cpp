#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0;
    for (int i = 1; i < n + 1; i++){
        if (i != 1 && i != n){
            if (n % i == 0){
                a = a + 1;
            }
        }
    }
    if (a != 0){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}