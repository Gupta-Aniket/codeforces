//https://codeforces.com/problemset/problem/1323/A

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
    int n, a, b; 
    cin >> n;
    vector<int> v;

    for(int i=0; i<n; i++){
        cin >> a; 
        for(int j=0; j<a; j++){
            cin >> b; 
            v.push_back(b);
        }
    }

    
    // your code goes here
    return 0;
}