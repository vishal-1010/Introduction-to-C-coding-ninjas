#include<iostream>
using namespace std;

bool checkPalindrome(char str[]){


  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
	int count = 0 ;
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }
    int n = count / 2;
    for(int i = 0, m = count - 1; i < n; i++, m--){
        if(str[i] != str[m]){
            bool checkPalindrome = false;
            return checkPalindrome;
        }
    }
    return checkPalindrome;
}


int main(){

  char str[10000];
  cin.getline(str,10000);

  if(checkPalindrome(str)){
  	cout << "true" << endl; 	
  }else{
  cout << "false" << endl;
  }
}

