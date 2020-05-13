#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    // your code goes here
    int n, i; 
    int count=0; 
    cin >> n; 
    string s ;
    cin >> s; 
    vector< char > a; 
    copy(s.begin(), s.end(), back_inserter(a));

    for(i=0; i<n; i++){
        if(a[i] == 'x')
            if(a[i-1]==a[i] && a[i+1]==a[i])
                count ++;

    }

    if(count > 0)
        cout << count; 

    else
        cout << "0";
    // your code goes here
    return 0;
}