#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
 
int main()
{
    // your code goes here  
    int n;
    cin >> n; 
    int rem = n%4 ; 
    if (rem == 0)
        cout << "1 A";
    else if(rem == 1) // we have to do nothing as it is already in A.
        cout << "0 A";
    else if(rem == 2)
        cout << "1 B";
    else 
        cout << "2 A";
    

    // your code goes here
    return 0;
}