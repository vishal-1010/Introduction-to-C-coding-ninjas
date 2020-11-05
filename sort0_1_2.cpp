#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    //Write your code here
    int zeroCount = 0, oneCount = 0, twoCount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        else if(arr[i] == 1){
            oneCount++;
        }
        else{
            twoCount++;
        }
    }
    for(int i = 0; i < zeroCount; i++){
        arr[i] = 0;
    }
    for(int i = zeroCount; i < zeroCount + oneCount; i++){
        arr[i] = 1;
    }
    for(int i = zeroCount + oneCount; i < zeroCount + oneCount + twoCount; i++){
        arr[i] = 2;
    }

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}