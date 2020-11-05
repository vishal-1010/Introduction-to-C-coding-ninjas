#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter N: ";
    cin >> n;

    int d = 2;
    bool divided = false;
    while (d < n){
        if (n % d == 0){
            cout << "Not prime" << endl;
            divided = true;
            break;
        }
        d = d + 1;
    }
    if (!divided) {
        cout << "Prime" << endl; 
    }
}   
