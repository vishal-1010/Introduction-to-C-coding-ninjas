#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    //Write your code here 
    // first we will sort it then we will return the second largest number
    if(n <= 1){
        return -2147483648;
    }
    bool same = true;
        for(int j = 1; j < n; j++){
            if(input[0] != input[j]){
                same = false;
        }
    if(same){
        return -2147483648;
    }
        }
    int l = INT8_MIN;
    int s = INT8_MIN;
    for(int i = 0; i < n; i++){
        if(input[i] > l ){
            s = l;
            l = input[i];
        }
        else if (input[i] > s && input[i] < l){
            s = input[i];
        }
    }
    return s;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}