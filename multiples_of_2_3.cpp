#include <iostream>
using namespace std;

int FindSum(int *arr,int l)
{
//Write code here 
    int sum = 0;
    for(int i = 0; i < l; i++){
        if(arr[i] % 2 == 0 || arr[i] % 3 == 0){
            sum += arr[i];
        }
    }
    return sum;
}
 
int main(){
    int input[100000];
    int n;
    for(int i = 0 ; i < n; i++){
        cin >> input[i];
    }
    cout << FindSum(input, n) ;
}