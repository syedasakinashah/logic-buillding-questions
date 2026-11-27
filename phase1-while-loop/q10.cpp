// Phase 1 : While Loop
// Q10. Find and print the product of all digits of a given number.

#include <iostream>
using namespace std;

int main() {
    int n;
    int product = 1;
    cout<<" enter a number ";
    cin>>n;
    
    while( n> 0)
    {
        int digit = n % 10;
        product *= digit;
        n = n / 10;   // Remove the last digit
       
    }
    cout<<"Product of all digits: "<<product<<endl;

    

    return 0;//
}
