//https://codeforces.com/problemset/problem/1148/A

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
    long long a, b, c;
    cin >> a >> b >> c; 

    cout << 2*c + min(a,b) + min(max(a,b), min(a,b)+1);
    // your code goes here
    return 0;
}