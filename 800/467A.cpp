// https://codeforces.com/problemset/problem/467/A

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
    int a, b; 
    vector <int> v1; 
    for(int i=0; i<n; i++){
        cin >> a >> b; 
        if(b-a >= 2)
            count ++; 
    }
    cout << count; 
   
    // your code goes here
    return 0;
}