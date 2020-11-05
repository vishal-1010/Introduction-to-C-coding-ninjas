#include <iostream>
using namespace std;

void change(int *arr,int l)
{
//Write code here 
    for(int i = 0; i < l; i++){
        if(arr[i] / 4 == 0){
            arr[i] = -1;
        } 
    else{
        arr[i] /= 4;
    }
    }
}

 
int main(){
    int input[100000];
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> input[i];
    }
    change(input, n);
    for(int i = 0; i < n; i++){
        cout << input[i] << ' ';
    }
}