#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int input[1000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    for(int i = n - 1; i > -1; i--){
        cout << input[i] << ' ';
    }
    return 0;
}
