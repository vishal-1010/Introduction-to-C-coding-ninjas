/*Write a program to input an integer N and 
print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places!
That is, if the given integer is "13245", even digits are 2 & 4 and
odd digits are 1, 3 & 5.
Input format :*/


// DONE

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sumEven = 0;
    int sumOdd = 0;
    while (n > 0){
        int remainder = n % 10;
        if (remainder % 2 == 0){
            sumEven = sumEven + remainder;
        }
        else{
            sumOdd = sumOdd + remainder;
        }
        n = n / 10;
    }
    cout << sumEven << " " << sumOdd;
}
