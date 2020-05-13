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
    int a; 
    int s = 0; 
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> a; 
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i+=2){
        s += (v[i+1]- v[i]);
    }
    cout << s; 

    // your code goes here
    return 0;
}