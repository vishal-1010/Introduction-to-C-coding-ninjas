#include <iostream>
using namespace std;

void numbers_1_to_n(int n){
    for (int i = 1; i <= n; i++){
        cout << i << endl;
    }
}

int main(){
    int n;
    cin >> n;
    numbers_1_to_n(n);
}