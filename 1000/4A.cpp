//https://codeforces.com/problemset/problem/4/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
 
int main()
{
    // your code goes here  
    int m; 

    
    cin >> m;
    if(m==2 || m % 2 != 0)
        cout << "NO";
    
    else
        cout << "YES";
    // your code goes here
    return 0;
}