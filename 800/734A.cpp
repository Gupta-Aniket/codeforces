#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    // your code goes here
    string s; int n; 
    cin >> n; cin >> s; 
 
    vector<char> v;
    copy(s.begin(), s.end(), back_inserter(v));
 
    int A = count(v.begin(), v.end(), 'A');
 
    if(A > (n-A))
        cout << "Anton";
    
    else if(A < (n-A))
        cout << "Danik";
 
    else 
        cout << "Friendship";
 
    // your code here
    return 0;
 
}