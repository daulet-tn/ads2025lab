/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    vector <char> c;
    vector <char> d;
    for (int i = 0; i < a.size(); i++){
        c.push_back(a[i]);
        if (i != 0){
            if (a[i] == '#'){
                c.pop_back();
                c.pop_back();
            }
            else {
                c.pop_back();
            }
        }
    }

    for (int i = 0; i < b.size(); i++){
        d.push_back(b[i]);
        if (i != 0){
            if (b[i] == '#'){
                d.pop_back();
                d.pop_back();
            }
            else {
                d.pop_back();
            }
        }
    }

    if (c)
    return 0;
} */



#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> process(const string &s) {
    vector<char> res;
    for (char ch : s) {
        if (ch == '#') {
            if (!res.empty()) res.pop_back();
        } else {
            res.push_back(ch);
        }
    }
    return res;
}

int main() {
    string a, b;
    cin >> a >> b;

    vector<char> c = process(a);
    vector<char> d = process(b);

    if (c == d) cout << "Одинаковые" << endl;
    else cout << "Разные" << endl;

    return 0;
}
