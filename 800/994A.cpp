//https://codeforces.com/problemset/problem/994/A

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
    cin >> n >> m;
    int a[1000], b[1000];

    vector<int> v; 
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int j=0; j<m; j++){
        cin >> b[j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i]==b[j])
                cout << a[i] << " ";
        }
    }

    // your code goes here
    return 0;
}