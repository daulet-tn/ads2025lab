#include <iostream>
#include <vector>
using namespace std;

int LCA(int a, int b, vector<vector<int>> & numbers){
    vector<int> root1;
    vector<int> root2;
    for (int i = numbers.size() - 1; i < 0; i--){
        if (numbers[i][1] == a){
            
        }
    }
}

int main(){
    int N;
    cin >> N;
    int p, q;
    cin >> p >> q;
    vector<vector<int>> numbers(N, vector<int>(2, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
        cin >> numbers[i][j]; 
        }
    }

    return 0;
}