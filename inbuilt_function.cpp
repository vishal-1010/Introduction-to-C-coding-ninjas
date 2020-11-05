#include <iostream>
#include <cstring>

using namespace std;

int main(){
    // char input[100];
    // cout << "Enter first string : ";
    // cin.getline(input, 100);
    // int len = strlen(input);
    // cout << "Length : " << len << endl ;
    // char input1[100];
    // cout << "Enter second string :";
    // cin.getline(input1, 100);
    // int compare = strcmp(input, input1);
    // if(compare == 0){
    //     cout << "The strings are same" << endl;
    // }
    // else{
    //     cout << "The strings are different" << endl;
    // }
    char input1[] = "abcde";
    char input2[] = "hello";
    cout << "Before copy input1 : " << input1 << endl;
    // strcpy(input1, input2);
    strncpy(input1, input2, 3);
    cout <<"After copy input1 : " << input1 << endl;
}