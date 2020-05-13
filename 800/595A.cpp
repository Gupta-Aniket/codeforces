//https://codeforces.com/problemset/problem/595/A

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
    int n, m;
    int a, b; 
    int count=0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int i=0; i<m; i++){
        cin >> a >> b; 
        if(a==1 && a==b) 
            count++; 
        
        else if(a==1 || b==1)
            count++;

    }
}
    cout << count; 
    // your code goes here
    return 0;
}