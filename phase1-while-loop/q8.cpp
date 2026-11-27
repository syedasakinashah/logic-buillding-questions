// Phase 1 : While Loop
// Q8. Calculate the sum of all odd numbers from 1 up to n.

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int n , sum = 0;
    cout<<"enter a number : ";
    cin>>n;
    while( i<=n){
       
        if(i%2!=0){
           sum += i;
            
       }
       i++;
       
    }
     cout << sum;
    

    return 0;
}
