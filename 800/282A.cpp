//https://codeforces.com/problemset/problem/282/A

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
    int d; 
    int p, m;
    cin >> n;
    string s; 
    vector< char > c; 
    for(int i=0; i<n; i++){
        cin >> s; 
        copy(s.begin(), s.end(), back_inserter(c));
        d = 0;
        p = count(c.begin(), c.end(), '+');

        m = count(c.begin(), c.end(), '-');

    }

    cout << p/2 - m/2;
    // your code goes here
    return 0;
}