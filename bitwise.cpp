#include <iostream> 
using namespace std;

int main(){
    int r_or = 15 | 30;
    int r_and = 15 & 30;
    int r_not = ~15;
    int r_xor = 15 ^ 30;
    int r_leftshift = 15 << 1;
    int r_rightshift = 15 >> 1;
    cout << r_or << endl;
    cout << r_and << endl;
    cout << r_not << endl;
    cout << r_xor << endl;
    cout << r_leftshift << endl;
    cout << r_rightshift << endl;

}