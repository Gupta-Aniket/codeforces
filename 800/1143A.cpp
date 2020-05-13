//https://codeforces.com/problemset/problem/1148/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <iterator>
#include <map>

using namespace std;
 
int main()
{
    // your code goes here  
    int n; 
    cin >> n;
    int a; 
    int b = 0; 
    vector<int> v; 
    for(int i=0; i<n; i++){
        cin >> a; 
        v.push_back(a);
    }

    for(int i=0; i<n; i++){
        if(v[i] == 1 )
            v[i] = 0, b++;
            
        if(v[i] == 0 )
            v[i] = 1, b++;
    }

    cout << b; 
    // your code goes here
    return 0;
}