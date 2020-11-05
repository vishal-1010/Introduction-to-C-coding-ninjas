#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int m = (n + 1) / 2;
    int o = n - m;
    for(int i = 0; i < m; i++){
        int spc = m - 1 - i;
        while(spc != 0){
            cout << ' ';
            spc--;
        }
    for(int j = 0; j < 2 * i + 1 ; j++){
        cout << '*';
    }
    cout << endl;
    }
    for(int i = 0; i < o; i++){
    for(int space = 1; space <= i + 1; space++){
        cout << ' ';
    }
    for(int j = (2 * (o - i) - 1); j > 0; j--){
        cout << '*';
    }
    cout << endl;
    } 
    }
