#include <iostream>
using namespace std;
// input1 - first input string
// input2 - second input string
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int lenS1 = 0;
    int lenS2 = 0;
    int a[256] = {0};
    bool is_permutation;
    for(int i = 0; input1[i] != '\0'; i++){
        lenS1++;
    }
    for(int i = 0; input2[i] != '\0'; i++){
        lenS2++;
    }
    if(lenS1 == lenS2){
        for(int i = 0; i < lenS1; i++){
            a[input1[i]]++;
                }
        for(int i = 0; i < lenS1; i++){
            a[input2[i]]--;
                }
    }
    else{
     is_permutation = false;
    }
    for(int i = 0; i < 256; i++){
        if(a[i] != 0){
            is_permutation = false;
            break;
        }
        else;
        is_permutation = true;
    }
    return is_permutation;
}


int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
