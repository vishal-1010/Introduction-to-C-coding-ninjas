#include <iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    int i = 0;
    while(input[i] != '\0'){
        i++;
        count++;
    }
    return count;
}

int main(){
    char name[100];
    cout << "Enter your name : ";
    cin >> name;
    cout<< "Name : " << name << endl;
    cout << "Length : " << length(name) << endl;
}