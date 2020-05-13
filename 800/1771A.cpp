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
    int n, c, limak = 0, radewoosh = 0, sum = 0, time = 0; 
    vector<int> a, t;
    int d, e; 
    cin >> n ;
    cin >> c; 
    for(int i=0; i<n; i++){ // for storing the time and problem difficulty
        cin >> d;
        a.push_back(d);
    }

    for(int i=0; i<n; ++i){ // for storing time 
        cin >> e;
        t.push_back(e);
    }

    for(int i=0; i<n; ++i){
        time += t[i];
        if(a[i] > time) 
            limak += (max(a[i]-(c*time),0));
    }

    cout << limak;
    // to set all the var to 0
    sum = 0;
    time = 0;

    reverse(a.begin(), a.end());
    reverse(t.begin(), t.end());

    for(int i=0; i<n; ++i){
        time += t[i];
        if(a[i] > time)
            radewoosh += (max(a[i]-(c*time),0));
        
    }    

    cout << radewoosh;

    if(limak > radewoosh)
        cout << "Limak ";
    
    else if(radewoosh == limak)
        cout << "Tie";
    
    else 
        cout << "Radewoosh";
    // your code goes here
    return 0;
}