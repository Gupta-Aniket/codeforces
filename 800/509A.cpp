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
    int i, j; 
    int a[10][10];

    for(i=1; i<n; i++){
        for(j=1; j<n; j++){
            a[i][j] = a[i-1][j] + a[i][j-1];

        }

    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout << a[i][j] << " ";
        }cout << endl;
    }


    // your code goes here
    return 0;
}