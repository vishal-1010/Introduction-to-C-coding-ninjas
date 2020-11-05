#include <iostream>
using namespace std;


void trimSpaces(char input[]) {
  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print or return the output.
   *  Change in the given input string itself.
   *  Taking input and printing output is handled automatically.
   */
   int size = 0;
   char a[1000000];
   for(int i = 0, k = 0 ; input[i] != '\0'; i++){
       if (input[i] == ' '){
           continue;
       }
       else{
           a[k] = input[i];
           size++; 
           k++;
       }
   }
    for(int i = 0; i < size; i++){
        input[size] = '\0';
        input[i] = a[i];
    }

}



int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}


