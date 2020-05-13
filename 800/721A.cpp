#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
 
int main()
{
    // your code goes here
    int n; 
    cin >> n; 
    string s; 
    cin >> s;
    int b=0, w=1; 
    vector<char> v; 

    copy(s.begin(), s.end(), back_inserter(v));
 

    for(int i=0; i<n; i++){
        if(v[i] == 'B')
            b++; 
        
        if(v[i] == 'W')
            b = 0; 
        
    }
    cout << b; 


    // your code goes here
    return 0;
}