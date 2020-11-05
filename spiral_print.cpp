#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int count = nRows * nCols;
    int a = 0;
    int colStart = 0;
    int colEnd = nCols - 1;
    int rowStart = 0;
    int rowEnd = nRows - 1;
    while(a != count){
        for(int i = rowStart; i <= colEnd; i++){
            cout << input[rowStart][i] << ' ';
            a++;
        }
        rowStart++;
        for(int i = rowStart; i <= rowEnd; i++){
            cout << input[i][colEnd] << ' ';
            a++;
        }
        colEnd--;
        for(int i = colEnd; i >= colStart; i--){
            cout << input[rowEnd][i] << ' ';
            a++;
        }
        rowEnd--;
        for(int i = rowEnd; i >= rowStart; i--){
            cout << input[i][colStart] << ' ';
            a++;
        }
        colStart++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}