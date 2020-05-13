#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
 
int main()
{
    // your code goes here  
    int t;
    cin >> t; 

    int n, m[10], a[20][20];
    int temp;
    for(int i=0; i<t; i++){
    cin >> n >> m[i];
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }

    }

    for(int i=0; i<t; i++){
        cout << m[i];
        cout << endl; 
    }


    // your code goes here
    return 0;
}