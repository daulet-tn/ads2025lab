#include <iostream>
#include <vector>
#include <stack>
#include <set>
using namespace std;

int main() {

    int n;
    cin >> n;
    int z =0;

    vector<string> users(n);

    for (int i = 0; i < n; i++){
        string x;
        cin >> x;
        users[i] = x;
    }
    set<string> seen;      
    stack<string> st;       

    
    for (string user : users) {
        if (seen.find(user) == seen.end()) { 
            st.push(user);                  
            seen.insert(user);  
            z++;
        }
    }

    cout << "All in all: " << seen.size() << endl;

    cout << "Students:" << endl;
    while (!st.empty()) {
        cout << st.top() << endl;  
        st.pop();                
    }
    cout << endl;
    return 0;
}