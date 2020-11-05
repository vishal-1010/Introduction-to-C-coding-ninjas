#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
    if(nRows == 0 && mCols == 0){
        cout << "row " << 0 << ' ' << -2147483648;
        return ;
    }
    int row[nRows] = {0};
    int col[mCols] = {0};
    for(int i = 0; i < nRows; i++){
        for(int  j = 0; j < mCols; j++){
            row[i] += input[i][j]; 
        }
    }
    for(int j = 0; j < mCols; j++){
        for(int  i = 0; i < nRows; i++){
            col[j] += input[i][j]; 
        }
    }
    char a = 'r';
    int largest = row[0];
    int largest_index = 0;
    for(int i = 1; i < nRows; i++){
        if(row[i] > largest){
            largest = row[i];
            largest_index = i;
        }
    }
    for(int i = 0; i < mCols; i++){
        if(col[i] > largest){
            largest = col[i];
            largest_index = i;
            a = 'c';
        }
    }

    if(a == 'c'){
        cout << "column " << largest_index << ' ' << largest;
    }
    else{
        cout << "row " << largest_index << ' ' << largest;
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

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}