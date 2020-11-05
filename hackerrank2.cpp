#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int space = n - 1;
    int minv = 1;
    int i, j;
    for (i = 0; i < n; i++){
        for (j = space; j > i; j--){
            cout << ' ';
        }
        int k = 0;
        int val = i + 1;
        while (k <= i){
            cout << val;
            val--;
            k++;
        }
        int l = i;
         int ans = 2;
        while (l >= 1){
            cout << ans ;
            l--;
            ans++;
        }
        cout << endl;
    }
}