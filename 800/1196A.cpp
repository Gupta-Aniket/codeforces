#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    // your code goes here
    int n, i; 
    cin >> n; 
    
    vector< long long > v1, v2, v3; 
    long long a, b, c; 

    for(i=0; i<n; i++){

        cin >> a >> b >> c; 
        v1.push_back(a);
        v2.push_back(b);
        v3.push_back(c);

    }

    for( i=0; i<n; i++){
        if(((v1[i] + v2[i] + v3[i])  % 2 )== 0){
            cout << ((v1[i] + v2[i] + v3[i])  / 2);
            cout << endl;
        }
        
        else{ 
            cout << (((v1[i] + v2[i] + v3[i])-1)  / 2);
            cout << endl;
            }
    }
    // your code goes here
    return 0;
}