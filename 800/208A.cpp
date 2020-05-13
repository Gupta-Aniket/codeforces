//https://codeforces.com/problemset/problem/208/A


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
    copy(s.begin(), s.end(), back_inserter(v));
    for(int i=0; i<n; i++){
        if(v[i]== 'W' && v[i+1]== 'U' && v[i+2] == 'B'){
            
            v[i] = ' ';
            v[i+1] = ' ';
            v[i+2] = ' ';
        }

    }

    for(int i=0; i<n; i++){
        cout << v[i];
    }
    
    // your code goes here
    return 0;
}