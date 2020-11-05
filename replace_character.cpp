#include <iostream>
using namespace std;
void replaceCharacter(char input[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
    int count = 0;
    for(int i = 0; input[i] != '\0'; i++){
        count++;
    }
    for(int i = 0; i < count; i++){
        if(input[i] == c1){
            input[i] = c2;
        }
    }
}

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
