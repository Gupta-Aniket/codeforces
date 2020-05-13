//https://codeforces.com/problemset/problem/1173/A

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
    int x, y, z; 
    cin >> x >> y >> z; 

    if(z == max(y,z) && z==max(x,z) && z!= 0){
        cout << "?";
    }

    else{
    if(abs(x-y) <= z && z!= 0)
        cout << "?";
    
    else if(x == y)
        cout << "0";

    else if(x > y)    
        cout << "+";
    
    else 
        cout <<"-";
    }
    // your code goes here
    return 0;
}