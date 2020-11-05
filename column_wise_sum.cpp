#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int a[100][100];
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int sum[n] = {0};
    for(int j = 0, k = 0; j < n; j++, k++){
        for(int i = 0; i < m; i++){
            sum[k] += a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        cout << sum[i] << ' ';
    }
}


