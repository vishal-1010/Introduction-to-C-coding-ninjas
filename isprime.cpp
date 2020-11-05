#include <iostream>
using namespace std;

bool isPrime(int n){
    int d = 2;
    while (d < n){
        if (n % d == 0){
            return 0;
        }
    d++;
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++){
        if (isPrime(i)){
            cout << i << " " << endl;
        }
    }
}