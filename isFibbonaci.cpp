#include <iostream>
using namespace std;

bool isfib (int n){
    int f1 = 0;
    int f2 = 1;
    while (n == f1 || n == f2){
        return true;
    }
    while (f2 <= n){
        int next = f1 + f2;  // very important write in notebook and then understand it.
        f1 = f2;
        f2 = next;
        while (f2 == n || f1 == n){
            return true;
        }
    }
    return false;

}

int main(){
    int n;
    cin >> n;
    cout << isfib(n);
}