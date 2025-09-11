#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++){
        if (s1[i] == '#'){
            if (i > 0){
                s1.erase(i - 1, 2);
                i -= 2;
            }
            else {
                s1.erase(i, 1);
                i -= 1;
            }
        }
    }
    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] == '#') {
            if (i > 0) {
                s2.erase(i - 1, 2);
                i -= 2;
            } else {
                s2.erase(i, 1);
                i -= 1;
            }
        }
    }
    if (s1 == s2) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}