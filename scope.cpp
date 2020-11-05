#include <iostream>
using namespace std;

int main(){
    int i = 10;
    while (i != 0){
        int i2 = 1;
        cout << i2 <<endl;
        i--;
    }
    // i2 is not available here
    // cout << i2;
    // This is outside the scope
}