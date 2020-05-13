//https://codeforces.com/problemset/problem/855/A

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
    int n,i,j;
    string s[102];

    cin >> n;
    for(i=0;i<n;i++)
    {
    	cin>>s[i];
    	for(j=0;j<i;j++)
    	{
    		if(s[i]==s[j])
    			break;
    	}
    	if(j==i)
    		printf("NO\n");
    	else
    		printf("YES\n");
    }
    // your code goes here
    return 0;
}