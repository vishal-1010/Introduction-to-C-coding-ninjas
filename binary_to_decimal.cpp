#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 0;
    int ans = 0;
    while (n != 0){
        int d = n % 2;
        ans += pow(10, i) * d;
        n = n / 2;
        i++;
    }
    cout << ans;
}