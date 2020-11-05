#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n){
        int space = n - i + 1;
        while (space > 1){
            cout << ' ';
        }
    int j = 1;
    while (j < 2 * i - 1){
        cout << j;
        j++;
    }
    int k = 2 * i - 1;
    while (k > i - 1){
        cout << k;
        k--;
    }
    
    i++;
    cout << endl;
    }

}