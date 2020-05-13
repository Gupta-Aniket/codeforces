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
    
    for(int i=0; i<n; i++){
        int a; 
        string b;
        vector< int > v; 

        cin >> a >> b;

        copy(b.begin(), b.end(), back_inserter(v));
        
        vector<int>:: iterator it = find(v.begin(), v.end(), 8);
        if(*it <= 8)
            cout << "YES\n";
        
        else
            cout << "NO\n";
    }
    // your code goes here
    return 0;
}