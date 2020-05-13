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
    string s; 
    cin >> s; 

    vector<char> a; 
        copy(s.begin(), s.end(), back_inserter(a));
    int gap = 1; 
    for(int i=0; i<n; i++)
        cout << a[i], i+= gap, gap++; 

            // your code goes here
    return 0;
}