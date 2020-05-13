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
    char a; 
    vector<char> v;

    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a) ;

    }
    if( count(v.begin(), v.end(), 'n') > 0)
        for(int i=0; i< count(v.begin(), v.end(), 'n'); i++)
            cout << "1 ";

    if(count(v.begin(), v.end(), 'z') > 0)
        for(int i=0; i< count(v.begin(), v.end(), 'z'); i++)
            cout << "0 ";
    // your code goes here
    return 0;
}