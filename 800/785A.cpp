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
    int count = 0 ;

    int a; 
    vector<int> v;

    for(int i=0; i<n; i++){
        cin >> a; 
        v.push_back(a);
    }
 
    for(int i=0; i<n; i++){
        count += (*max_element(v.begin(), v.end()) - v[i]);
    }

    cout << count; 
    // your code here
    return 0;
 
}