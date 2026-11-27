// Phase 1 : While Loop
// Q7. Calculate the sum of all even numbers from 1 up to n.

#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n, sum = 0;
    int i = 1;
    cout<<"enter a number : ";
    cin>>n;
    while( i <= n-1)
    {
        i++;
        if(i%2==0)
        {

        
        sum = sum +i;
        }
       
        

    }
    cout << sum;
    

    

    return 0;
}
