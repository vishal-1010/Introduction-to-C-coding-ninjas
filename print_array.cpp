#include <iostream>
#include <climits>
using namespace std;

void printArray(int input[], int n){  
    /* we can't determine the size of the array in function 
      so we should always pass the size of the array as a
      seperate integer. */ 
    cout << "Printing the array: " << endl;   
    for (int i = 0; i < n; i++){
        cout << input[i] << ' ' << endl;
    }                              
}

int main(){
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "Enter the elements of array: " << endl;
    int input[100];
    int i = 0;
    while (i < n){
        cin >> input[i];
        i++;
    }
    printArray(input , n);
    
}