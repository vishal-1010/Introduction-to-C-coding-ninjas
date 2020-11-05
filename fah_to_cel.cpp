#include <iostream>
using namespace std;
void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    // int start, stop, step;
	cin >> start;
    cout << endl;
    cin >> end;
    cout << endl;
    cin >> step;
    cout << endl;
    int far = (start * 9 )/ 5 + 32; 
	while (start <= end){
        cout << start << '\t' << far;
        start += step;
    }
}
void printTable(int start, int end, int step);

