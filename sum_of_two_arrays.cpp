#include <iostream>
using namespace std;
#include <cmath>
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
	int carry = 0;
	int value = 0;
	int k = 1 + max(size1, size2);

	for(int i = size1 - 1, j = size2 - 1, l = k - 1; l >= 0; i--, j--, l--){
        int curr1, curr2;
		if(i < 0){
			curr1 = 0;
		} else {
            curr1 = input1[i];
        }
		if(j < 0){
			curr2 = 0;
		} else {
            curr2 = input2[j];
        }
		int m = curr1 + curr2 + carry;
		carry = m / 10;
		value = m % 10;
		output[l] = value;
	}
	
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}