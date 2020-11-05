#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n, c;
    cin >> n;
    cin >> c;
    if (c == 1){
        int sum = n*(n / 2) + n / 2;
        cout << sum;
    }
    else if(c == 2){
        int product = 1;
        for(int i = n; i >= 1; i--){
            product *= i;
        }
        cout << product;
    }
    else{
        cout << -1;
    }
	
}
