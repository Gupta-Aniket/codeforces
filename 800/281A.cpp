//https://codeforces.com/problemset/problem/281/A

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
    int n; 

    cin >> s; 
    n = s.length();
    vector< char > a; 
    copy(s.begin(), s.end(), back_inserter(a));
    cout << char(toupper(a[0]));

    for(int i=1; i<n; i++){
        cout << a[i];
    }
    // your code goes here
    return 0;
}