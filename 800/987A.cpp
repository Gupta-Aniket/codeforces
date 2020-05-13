//https://codeforces.com/problemset/problem/987/A

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
    cin >> n ; 
    string s; 

    map<string, string> stone;
    stone.insert(pair<string, string> ("purple", "Power" ) );
    stone.insert(pair<string, string> ("green", "Time") );
    stone.insert(pair<string, string> ("blue", "Space") );
    stone.insert(pair<string, string> ("orange", "Soul") );
    stone.insert(pair<string, string> ("red", "Reality") );
    stone.insert(pair<string, string> ("yellow", "Mind") );

    map<string, string> :: iterator itr;
    for(int i=0; i<n; i++){
        cin >> s;
        for(itr = stone.begin(); itr!= stone.end(); ++itr){
            if(s == itr-> first)
                stone.erase(s);
        }
    }
    cout << 6-n << "\n";
    for(itr = stone.begin(); itr!= stone.end(); ++itr){
        cout << itr -> second <<"\n";
    }
    // your code goes here
    return 0;
}