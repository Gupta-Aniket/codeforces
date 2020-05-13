//https://codeforces.com/problemset/problem/1154/A
#include<iostream>
#include<string.h>
#include<math.h>
 
using namespace std;
 

int main(){
    // your code here
    long long a, b, c, d; 
    cin >> a >> b >> c >> d;
    // Frist we need to find out the largest of the 4 numbers as it will be a+b+c 
    
    if(a>b)
        cout << a-b << " " << a-c << " " << a-d<< " ";
    
    else if(b>c)
        cout << b-a << " "  << b-c << " " << b-d << " " ; 
 
    else if(c>d)
        cout << c-a << " "  << c-b << " " << c-d << " " ;
 
    else
        cout << d-a << " " << d-b << " " << d-c << " " ; 
 
 
 
    // your code here
    return 0;
}