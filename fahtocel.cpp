#include <iostream>
using namespace std;

int main(){
    int f;
    cout << "Enter Fah value: " << endl;
    cin >> f;
    int c = (5.0/9) * (f - 32);
    
    cout << c << endl;
    cout << (5.0/9) * (f - 32) << endl;

    cout << 10 % 3 << endl;
    int a, b;
    cout << "Enter the numbers" << endl;
    cin >> a >> b;

    bool isEqual = (a == b);
    bool isAGreater = (a > b);
    bool isASmaller = (a < b);

    cout << "Are they equal: " << isEqual << endl;
    cout << "Is a great: " << isAGreater << endl;
    cout << "Is a less: " << isASmaller << endl;

    bool third = isEqual && isAGreater;  // It is going to be always false
    bool fourth = isEqual || isAGreater;  

    cout << "Not equal: " << !isEqual << endl;

}