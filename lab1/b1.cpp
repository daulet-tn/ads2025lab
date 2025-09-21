/*#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    stack<int> st; // стек для потенциальных ближайших младших
    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top() >= a[i]) {
            st.pop();
        }
        if (st.empty()) cout << -1 << " ";
        else cout << st.top() << " ";
        st.push(a[i]);
    }
    cout << endl;
    return 0;
}
*/


#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    stack<int> st; // стек для потенциальных ближайших младших
    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top() >= a[i]) {
            st.pop();
        }
        if (st.empty()) cout << -1 << " ";
        else cout << st.top() << " ";
        st.push(a[i]);
    }
    cout << endl;
    return 0;
}
