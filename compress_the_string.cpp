#include <iostream>
#include <cstring>
using namespace std;

void stringCompression(char input[]) {
    // Write your code here
    int n = strlen(input);
    for (int i = 0; i < n; i++) {
 
        // Count occurrences of current character
        int count = 1;
        while (i < n - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
 
        // Print character and its count
        cout << input[i] << count;
    }
}

int main() {
    char str[1000];
    cin.getline(str, 1000);
    stringCompression(str);
    cout << str;
}
// while(input[i] == input[i + 1] && input[i] != NULL)
// Keep incrementing count and i
// initialize it to zero and do this input[ptr++] = input[i]; just after the while!

