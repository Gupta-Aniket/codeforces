//https://codeforces.com/problemset/problem/236/A

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
    int n = s.length();
    vector< char > v; 

    copy(s.begin(), s.end(), back_inserter(v)) ;

    sort(v.begin(), v.end());
    int count = distance(v.begin(), unique(v.begin(), v.end()));

    if(count % 2 == 0)
        cout << "CHAT WITH HER!";
    else 
        cout << "IGNORE HIM!";
    // your code goes here
    return 0;
}