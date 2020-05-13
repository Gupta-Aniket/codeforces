#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    // your code goes here
    int n, r[10]; 
    int res = 0;
    cin >> n;
    int a, b; 
 
    for(int i=0; i<n;i++){
        cin >> a; 
        cin >> b;
        r[i]= a-b; 
    }
 
    for(int i=0; i<n; i++){
        res += r[i];
    } 
 
    if(res < 0)
        cout << "Chris";
 
    else if( res > 0)
        cout << "Mishka ";
 
    else 
        cout << "Friendship is magic!^^";
    
    // your code goes here
    return 0;
}