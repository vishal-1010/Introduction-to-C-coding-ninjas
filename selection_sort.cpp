#include <iostream>

using namespace std;

void selectionSort (int input[], int n){
    // Find minimum element in the array
    for(int i = 0; i < n - 1 ; i++){
    int min = input[i], minIndex = i;
    for(int j = i + 1; j < n; j++){
        if(input[j] < min){
            min = input[j];
            minIndex = j;
        }
    }
    // swap
    int temp = input[i];
    input[i] = input[minIndex];
    input[minIndex] = temp;

}
}

int main(){
    int input[6] = {3, 1, 5, 99, 9, 2};
    selectionSort(input, 6);
    for(int i = 0; i < 6; i++){
        cout << input[i] << ' ';
    }
    cout << endl;
}