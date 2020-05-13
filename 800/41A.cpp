// https://codeforces.com/problemset/problem/41/A

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
    string s1, s2; 
    cin >> s1 >> s2; 
    string s3; 
    reverse(s1.begin(), s1.end()); 
    if(s1 == s2)
        cout << "YES";  
    
    else 
        cout << "NO";

    // your code goes here
    return 0;
}