#include <iostream>

using namespace std;

int main(){
    int a[100][100];
    int n, m;
    cout << "Enter Number of Rows : ";
    cin >> n;
    cout << "Enter Number of Columns : ";
    cin >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
}
}