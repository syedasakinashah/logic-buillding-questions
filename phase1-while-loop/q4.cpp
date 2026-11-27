// Phase 1 : While Loop
// Q4. Print all odd numbers between 1 and 100.

#include <iostream>
using namespace std;

int main() {
    int n = 99, i = 1;
    while(i<=n)
    {
        i++;
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
     
    }
    

    return 0;
}
