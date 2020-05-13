#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    // your code goes here
    int n; cin >> n;
    string s; 
    int count;
    vector<char> v;     
    for(int i=0; i<n; i++){
        cin >> s; 
        copy(s.begin(), s.end(), back_inserter(v));
        auto it = lower_bound(s.begin(), s.end(), 0);
        auto it2 = upper_bound(s.begin(), s.end(), 0);
        if(*(it-1) == 1 and *it2 == 1)
            count ++;

        else 
            count = 0;

        cout << count << endl; 
    }
    // your code goes here
    return 0;
}