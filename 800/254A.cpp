//https://codeforces.com/problemset/problem/245/A

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
    int n;
    cin >> n;
    int t, k, l;
    int d=0, a=0;
    for(int i=0; i<n; i++){
        cin >> t  >> k >> l;
        if(t == 1){
            if(k>l)
                a++;
            
            else 
                a--;
        }

        if(t == 2){
            if(k>l)
                d++;
            else 
                d--;
        }
    }

    if(a>=0)
        cout << "LIVE" << endl ;
    else 
        cout << "DEAD" << endl ;

    if(d>=0)
        cout << "LIVE" << endl;
    else 
        cout << "DEAD" << endl;
    // your code goes here
    return 0;
}