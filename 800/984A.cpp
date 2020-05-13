//https://codeforces.com/problemset/problem/984/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
 
int main()
{
    // your code goes here  
    long int n, a;
    vector<long int> v;
    cin >> n;
    for(long int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
        if(n%2 != 0)
            cout <<  v[(n/2)];

        else 
             cout <<  v[((n)/2)-1];
    // your code goes here
    return 0;
}