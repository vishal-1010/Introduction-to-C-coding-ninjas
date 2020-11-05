#include <iostream>

using namespace std;

// input - given string
char highestOccurringChar(char input[]) {
    // Write your code here
    int a[256] = {0};
    int count;
    char ans;
    int size = 0;
    for(int i = 0; input[i] != '\0'; i++){
        size++;
        a[input[i]]++;
    }
        ans = input[0];
        count = a[input[0]];
    for(int j = 1; j < size; j++){
        if(a[input[j]] > count){
            ans = input[j];
            count = a[input[j]];
        }
    }
    return ans;
}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    cout << highestOccurringChar(input) << endl;
}
