// https://codeforces.com/problemset/problem/110/A

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
        string s;
        cin>>s;
        int counter=0;
        int len=s.length();
        int seven=count(s.begin(),s.end(),'4');
        int four=count(s.begin(),s.end(),'7');
        if((four+seven==4||four+seven==7))
            cout<<"YES";
        else
        cout<<"NO";

    // your code goes here
    return 0;
}