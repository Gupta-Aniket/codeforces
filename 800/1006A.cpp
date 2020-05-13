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
    long long int s;
    vector<long long> a; 
    for(int i=0; i<n; i++){
        cin >> s; 
        a.push_back(s);
    }

    for(int i=0; i<n; i++){
         if(a[i]%2 == 0)
            cout << a[i]-1 << " ";

       else
            cout << a[i] << " ";

    }
    // your code goes here
    return 0;
}