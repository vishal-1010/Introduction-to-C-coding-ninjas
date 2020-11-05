#include <iostream>
using namespace std;

// input - given string
// You need to remove all occurrences of character c that are present in string input.
// Change in the input itself. So no need to return or print anything.

void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++){
        len++;
    }
    int a[len];
    for(int i = 0, k = 0; i <= len; i++){
        if(input[i] == c){
            continue;
        }
        else{
            a[k] = input[i];
            k++;
        }
    }
    for(int i = 0; i < len; i++){
        input[i] = a[i];
    }

}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(input, c);
    cout << input << endl;
}
