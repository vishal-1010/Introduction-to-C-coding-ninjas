#include <iostream>
using namespace std;

int main(){
    char c;
    c = cin.get();
    int a, n, s;
    a = 0;
    n = 0;
    s = 0;
    if(isalpha(c)){
            a++;
        }
        else if((c == ' ' || c == '\n') || c == '\t'){
            s++;
        }
        else if (isdigit(c)){
            n++;
        }

    while(c != '$'){
        c = cin.get();
        if(isalpha(c)){
            a++;
        }
        else if((c == ' ' || c == '\n')|| c == '\t'){
            s++;
        }
        else if (isdigit(c)){
            n++;
        }
        }
        cout << a << ' ' << n << ' ' << s;
}