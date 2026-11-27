// Phase 1 : While Loop
// Q3. Print all even numbers between 1 and 100.

#include <iostream>
using namespace std;

int main() {
    int n = 100, i = 1;
    while(i<=n)
    {
        i++;
        if(i%2==0)
        {
            cout<<i<<endl;
        }
     
    }
    

    return 0;
}
