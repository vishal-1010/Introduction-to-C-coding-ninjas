#include<iostream>
using namespace std;


void printSubstrings(char str[]){
  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   * Print output as specified in the question.
   */
  for(int k = 0; str[k] != '\0'; k++){
  for(int i = k; str[i] != '\0'; i++){
      for(int j = k; j <= i; j++){
          cout << str[j];
      }
      cout << endl;
  }
  }

}

int main(){

  char str[10000];
  cin.getline(str,10000);

  printSubstrings(str);
}

