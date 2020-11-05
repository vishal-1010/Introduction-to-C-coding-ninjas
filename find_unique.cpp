#include <iostream>
int findUnique(int *arr, int size)
{
    //Write your code here
	for(int i = 0; i < size; i++){
		bool unique = true;
		for(int j = 0; j < size ; j++){
			if (i == j){
				continue;
			}
			if (arr[i] == arr[j]){
				unique = false;
			}
			}
		if (unique){
			return  arr[i];

		}
	}
	return 0;
	}

using namespace std;

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}