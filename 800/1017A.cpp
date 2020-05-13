#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
 
int main()
{
    // your code goes here  
    int n, a, b, c, d; 
    
    cin >> n;
    for(int i=0; i<n; i++){
            cin >> a >> b >> c >> d; 
        for(int j=0; j<n; j++){
            vector<int> v;
            v[j] = a+b+c+d;

            cout << v[j] <<" ";
        }
    }
    // your code goes here
    return 0;
}