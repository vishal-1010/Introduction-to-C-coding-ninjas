#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int a = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        a = 3 * i + 2;
        if(a % 4 == 0){
            n++;
            continue;

        }
        cout << a << ' ';
    }

}
