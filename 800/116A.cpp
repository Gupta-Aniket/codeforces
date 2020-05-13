//https://codeforces.com/problemset/problem/116/A

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
    vector< int > a, b; 
    cin >> n;
    int d, e; 
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> d >> e; 
        a.push_back(d);
        b.push_back(e);
    }

    // the minimum possible number of the tram seat will be max(bi)+(ai-b(i-1))

    vector< int > :: iterator it = max_element(a.begin(), a.end());
    unsigned int max = it - a.begin() ; 
    for(int i=0; i<max+1; i++){
    sum = b[max]+abs(a[max]-b[max-1]);
    }
    cout << sum ;
    // your code goes here
    return 0;
}