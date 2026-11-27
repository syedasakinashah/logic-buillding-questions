// Phase 1 : While Loop
// Q12. Reverse the given number and print the reversed value.

#include <iostream>
using namespace std;

int main() {
    int n = 678;
    int reverse[1000]={0};
    while( n>0)
    {
        int digit = n % 10;
        reverse [0]= digit;
        reverse[ 0]++;
        n = n / 10;
    }
    cout<< "heres the revere"<< reverse;
    

    return 0;
}
