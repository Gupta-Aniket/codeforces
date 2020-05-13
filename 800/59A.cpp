// https://codeforces.com/problemset/problem/59/A

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
    int upper = 0, lower = 0; 
    string s; 
    cin >> s; 
    int n = s.length();
    vector< char > c; 
    copy(s.begin(), s.end(), back_inserter(c));
    for(int i=0; i<n; i++){
        if(isupper(c[i]))
            upper ++; 
        else 
            lower ++;
    }

    if(upper <= lower)
        for(int i=0; i<n; i++){
            cout << char(tolower(c[i]));
        }

    else 
        for(int i=0; i<n; i++){
            cout << char(toupper(c[i]));
        }
    // your code goes here
    return 0;
}