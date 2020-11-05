#include <iostream>
using namespace std;

void removeConsecutiveDuplicates(char input[]){
    int size = 0;
    for(int i = 0 ; input[i] != '\0'; i++){
        size++;
    }
    char a[size + 1];
    for(int i = 0, k = 0; i <= size; i++){
        if(input[i] == input[i + 1]){
            continue;
        }
        else{
            a[k] = input[i];
            k++;
        }
    }
    for(int i = 0; i <=size; i++){
        input[i] = a[i];
    }
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    removeConsecutiveDuplicates(input);
    cout << input << endl;
}
