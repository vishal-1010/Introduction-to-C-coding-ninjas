#include <iostream>
using namespace std;

void rotate(int *input, int d, int size)
{
    //Write your code here
	int arr[size] = {0};
	for(int i = d , k = 0; k < size - d; i++, k++){
		arr[k] = input[i];
	}
	for(int i = 0, k = size - d; i < d; i++, k++){
		arr[k] = input[i];
	}
	for(int i = 0; i < size; i++){
		input[i] = arr[i];
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

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}