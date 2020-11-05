#include <iostream>
using namespace std;

int main(){
    int n;
    char c;
    cin >> n;
    cin >> c;
    int sum = 0;
    int product = 1;
    if (c == '1'){
        int j = 1;
        while (j <= n){
            sum += j;
            j++;
        }
    }
    else if(c == '2'){
        int j = n;
        while(j >= 1 ){
            product *= j;
            j--;
        }
    }
    else{
        cout << "-1";
    }   
    if (sum != 0){
        cout << sum;
    }else if(product < 1){
        cout << product;
    }
}