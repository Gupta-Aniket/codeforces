#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    // your code goes here
    int a[4];
    int sum = 0; 
    for( int i=0; i<4; i++)
        cin >> a[i];
 
    string s;
        cin >> s; 
        
    vector<int> v; 
    for(size_t i=0; i < s.size(); i++)
        v.push_back(s[i]-'0');
 
    for(int i=0; i< s.size(); i++ ){
        sum += a[v[i]-1];
    }
 
    cout << sum; 
 
 
 
    // your code goes here
    return 0;
}