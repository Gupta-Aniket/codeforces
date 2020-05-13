//https://codeforces.com/problemset/problem/1093/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
 
int main()
{
    // your code goes here  
    int n; 
    cin >> n;
    int a, count=0; 
    for(int i=0; i<n; i++){
        cin >> a; 
        for(int j=7; j>=2; j--){
            if(a==j)
                count = 1; 
            else
                count = (a/j + ((a%j)%2)-1);
        }
    cout << count  << endl; 
    }

    // your code goes here
    return 0;
}