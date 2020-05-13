//https://codeforces.com/problemset/problem/1080/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
 
int main()
{
    // your code goes here  
    int n, k;
    cin >> n >> k;
    if(n > 1 && k > 1)
        cout << (15*n)/k + 1;

    else 
        cout << (15*n)/k;
    // your code goes here
    return 0;
}