//https://codeforces.com/problemset/problem/266/A

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
    int n, count = 0;
    cin >> n;
    string s; 
    cin >> s; 
    vector< char > v; 
    copy(s.begin(), s.end(), back_inserter(v));

    for(int i=0; i<n; i++){
        if(v[i]==v[i+1])
            count++;
    }
    cout << count;  
    // your code goes here
    return 0;
}