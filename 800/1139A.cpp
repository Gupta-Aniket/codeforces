//https://codeforces.com/problemset/problem/1139/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
 
int main()
{
    // your code goes here  
    int n, sum = 0;
    cin >> n;
    string s;
    cin >> s; 
    vector<int> v;


    for(size_t i=0; i < n; i++)
        v.push_back(s[i]-'0');
 
    for(int i=0; i<n; i++ ){
        if(v[i]%2 == 0)
            sum += (i+1);
    }
    cout << sum; 

    // your code goes here
    return 0;
}