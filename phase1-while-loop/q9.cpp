// Phase 1 : While Loop
// Q9. Calculate and print the factorial of a given number.

#include <iostream>
using namespace std;

int main() {
    int n,fact;
    cout<<" enter a number for n ";
    cin>>n;
    while (  n>0)
    {
        n--;
        fact = n*n;
        
    }
    cout<<fact;

    

    return 0;
}
