// Phase 1 : While Loop
// Q5. Print the multiplication table of a given number from n x 1 to n x 10.

#include <iostream>
using namespace std;

int main() {
    int n,i = 0;
    cout<<"Enter a number for n ";
    cin>>n;
    while( i <= n-1) 
    {
        i++;

     cout<<n<<"*"<<i<<"="<<n*i<<endl;

    }

    

    return 0;
}
