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
    int count; 
        if(n%5 == 0)
            cout << n/5;
        
        else 
            cout << ((n/5) + 1);
 
    // your code goes here
    return 0;
}