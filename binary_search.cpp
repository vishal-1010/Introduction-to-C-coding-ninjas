#include <iostream>

using namespace std;

int binarySearch (int arr[], int n , int val){
    int start = 0, end = n - 1;
    while (start <= end){
        int mid = (start + end) / 2;
        if (arr[mid] == val){
            return mid; 
        }
        else if (val < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    // Take input from the user
    int n;
    cin >> n;

    int input[100];
    for(int i = 0; i < n ; i++){
        cin >> input[i];
    }

    int x; 
    cin >> x;
}