// https://codeforces.com/problemset/problem/271/A

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
    n++; 
    string s; 
    vector < char > v; 
    s = to_string(n);
    int d = s.length();
    copy(s.begin(), s.end(), back_inserter(v));

    for(int i=0; i<d; i++){
        
    }
    
    

    // your code goes here
    return 0;
}