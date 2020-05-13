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
    int count;
    cin >> n;
    int k, a[1000], b[1000];

    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    cin >> k;

    for(int i=0; i<n; i++){
        if(k >= a[i] && k <= b[i])
        count = n-i;

    }
    cout << count;
    // your code goes here
    return 0;
}