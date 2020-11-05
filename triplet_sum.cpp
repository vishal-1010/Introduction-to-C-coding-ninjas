#include <iostream>
using namespace std;

int tripletSum(int *input, int size, int x)
{
	//Write your code here
    int count = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                if ((i == j || k == i) || j == k){
                    continue;
                }
            if (input[i] + input[j] + input[k] == x){
                count++;
            }
            }
        }
    }
    return count / 6;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}