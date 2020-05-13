#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    // your code goes here
    int n, sum=0;
    cin >> n;
    vector<string> s;
    string str;
    for(int i=0; i<n; i++){
        cin>> str; 
        s.push_back(str);
        }
 
    for(int i=0; i<n; i++){
        if(s[i] == "Icosahedron")
                sum += 20;
 
        if(s[i] == "Cube")
                sum += 6;
 
        if(s[i] == "Tetrahedron")
                sum += 4;
 
        if(s[i] == "Dodecahedron")
                sum += 12;
 
        if(s[i] == "Octahedron")
                sum += 8;
    }
 
    cout << sum;
    // your code goes here
    return 0;
}