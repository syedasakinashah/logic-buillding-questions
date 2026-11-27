// Phase 1 : While Loop
// Q11. Count and print the total number of digits in a given number.

#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int n;
    cout<<" enter a number for n  : ";
    cin>>n;
    while( n> 0)
    {
        int digit = n % 10;
        count += 1;
        n = n / 10;   // Remove the last digit
       
    }
    cout<<count;


    

    return 0;
}
