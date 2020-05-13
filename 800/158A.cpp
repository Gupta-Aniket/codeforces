//https://codeforces.com/problemset/problem/158/A

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
    int n, m; 
    cin >> n >> m;

    int k ;
    vector< int > v; 
    for(int i=0; i<n; i++){
        cin >> k ;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    vector< int > :: iterator it = upper_bound(v.begin(), v.end(), v[m]);
    cout << it-v.begin(); 
    // your code goes here
    return 0;
}