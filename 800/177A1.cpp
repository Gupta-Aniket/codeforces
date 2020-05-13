//https://codeforces.com/problemset/problem/177/A1

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
    int n, sum = 0;
    cin >> n; 
    int a[n+1][n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; ++j){
            if(i==j)
                sum += a[i][j];

            if(j==(n+1)/2)
                sum += a[i][j];

            if(i==(n+1)/2)
                sum += a[i][j];

            if(i+j == (n+1))
                sum += a[i][j];
        }

    }

    cout << (sum - 3*(a[(n+1)/2][(n+1)/2]));
    // your code goes here
    return 0;
}