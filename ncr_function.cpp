#include <iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    int i = 1;
    while (i <= n){
        ans *= i;
        i++;
    }

    return ans;
}

int main(){
    int n, r;
    cin >> n;
    cin >> r;
    cout << factorial(n) / (factorial(r) * factorial(n - r));
}