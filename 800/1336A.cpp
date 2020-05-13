//https://codeforces.com/problemset/problem/1136/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
 
int main()
{
    // your code goes here  
    int n; 
    cin >> n;
    int k, a[10], b[10];

    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    cin >> k;

    for(int i=0; i<n; i++){
        cout << a[i] << " "<< b[i] << endl ;

    }

    // your code goes here
    return 0;
}