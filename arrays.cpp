#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin >> n;

    int input[100];
    int i = 0;
    while (i < n){
        cin >> input[i];
        i++;
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        if (max < input[i]){
        max = input[i];
    }
    }
    cout <<"Max : " << max;
}