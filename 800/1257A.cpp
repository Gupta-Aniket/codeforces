#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
 
int main()
{
    // your code goes here
    
    int n, x[100], a[100], b[100],s ; 
    cin >> n;

    for(int i=0; i<n; i++){
         cin >> x[i] >> a[i] >> b[i];

        if(a[i]<100)
            cout << (a[i] - x[i] + b[i]) << endl ;
        
        else
            cout << (a[i]  + b[i]) << endl ;
    }   
    // your code goes here
    return 0;
}