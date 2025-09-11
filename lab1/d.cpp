#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> st;
    for (char c : s) {
        if (st.empty()) {
            st.push(c);
        } 
        else {
            if (st.top() == c) {
                st.pop();
            } 
            else {
                st.push(c);
            }
        }
    }
    if (st.empty()) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}