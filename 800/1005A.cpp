#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
 
int main()
{
    // your code goes here
    int n, v, s=0; 
    cin >> n; 
    vector<int> a; 

    for(int i=0; i<n; i++){
        cin >> v;
         a.push_back(v);
    }

    for(int i=1; i<n; i++){
        if(a[i]==1){
            s++;
            }
    }

    cout << (s+1) << endl; 
    if(a[1] == 1)
        cout << a[1] << " ";
    for(int i=2; i<n; i++){
        if(a[i]==1)
                cout << a[i-1] << " ";
        
    }

    cout << a[n-1];
    // your code goes here
    return 0;
}