//https://codeforces.com/problemset/problem/245/A

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

int A_Reached, A_Lost, B_Reached, B_Lost;

	int n;
	cin >> n;
	for (int i = 1 ; i <= n ; i++)
	{
		int t, x, y;
		cin >> t >> x >> y;
		if (t == 1)
		{
			A_Reached += x; 
			A_Lost += y;
		}
		else
		{
			B_Reached += x;
			B_Lost += y;
		}
	}
	if (A_Reached >= A_Lost)
		cout << "LIVE" << endl;
	else
		cout << "DEAD" << endl;
	if (B_Reached >= B_Lost)
		cout << "LIVE" << endl;
	else
		cout << "DEAD" << endl;

    // your code goes here
    return 0;
}