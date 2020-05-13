//https://codeforces.com/problemset/problem/339/A

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
    string s; 
    cin >> s; 
    vector< char > v;


    s.erase(std::remove(s.begin(), s.end(), '+'), s.end());
    sort(s.begin(), s.end());
    copy(s.begin(), s.end(), back_inserter(v));
    int n= s.length();

    cout << v[0];
    if(n > 1)
        for(int i=1; i<n; i++){
            cout << "+" << v[i];

    }



    // your code goes here
    return 0;
}