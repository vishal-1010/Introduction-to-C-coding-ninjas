#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two number " << endl;
    
    cin >> a >> b;
    
    if (a == b){
        cout << "Hey they are equal"<<endl;
    } else{
        if (a > b) {
            cout << "a is greater" << endl;
        } else {
            cout << "a is less" << endl;
        }
    }
}