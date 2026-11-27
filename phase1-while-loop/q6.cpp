// Phase 1 : While Loop
// Q6. Calculate and print the sum of the first n natural numbers.

#include <iostream>
using namespace std;

int main() {
    int n ,i = 0,sum=0;
    cout<<"Enter a number for n : ";
    cin>>n;
    while(i<=n-1)
    {
        i++;
        sum += i;
    }
    cout<<sum;
    return 0;
}
