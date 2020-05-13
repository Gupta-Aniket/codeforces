#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
 
int main()
{
    // your code goes here
    int n, n1[10][10], m ;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> n1[i][j];
        }
    }

    for(int i=0; i<n; i++){
        cout << endl; 
        for(int j=0; j<i; j++){
            cout << n1[i][j] << " ";
        }
        cout << endl; 
    }

    

    
    
    // your code goes here
    return 0;
}