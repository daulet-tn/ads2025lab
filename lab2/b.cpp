#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;

int main (){
    int n;
    cin >> n;
    int x;
    cin >> x;
    deque<string> words(n);
    for (int i = 0; i < n; i++){
        cin >> words[i];
    }
    for (int i = 0; i < x; i++){
        string z = words.front();
        words.pop_front();
        words.push_back(z);
    }
    for (int i = 0; i < n; i++){
        cout << words[i] << " ";
    }
    return 0;
}