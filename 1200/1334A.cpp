//https://codeforces.com/problemset/problem/1334/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
 
int main()
{
    // your code goes here  
    int n, count = 1;
    int t, p[10], c[10];

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        for(int j=0; j<t; j++){
            cin >> p[j] >> c[j];
            if(p[j] < c[j]){
                if(p[j] > p[j+1])
                count = 0;
                if(c[j] > c[j+1])
                count = 0;
                }

            else
                count++;

        }
        if(count == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    // your code goes here
    return 0;
}