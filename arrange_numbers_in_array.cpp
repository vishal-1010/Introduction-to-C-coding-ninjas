#include <iostream>
#include <cmath>
using namespace std;
void arrange(int *arr, int n)
{
    //Write your code here
    //Write your code here
	for(int i = 0, k = 1, m = n - 1; i < (n + 1)/ 2; i++, m-- ){
		arr[i] = k;
		k++;
		arr[m] = k;
		k++;
}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}