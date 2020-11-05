#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n){
        int number_of_spaces = 1;
        while (number_of_spaces <= n - i){
            cout << ' ';
            ++number_of_spaces;
        }
    int stars = 1;
    while (stars <= i){
        cout << '*';
        ++stars;
    } 
    cout << endl;
    ++i;
    }
}   
