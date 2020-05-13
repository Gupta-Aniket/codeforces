#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    // your code here 
     int n; cin >> n;
     vector<int> v;
     int a, count=0; 

    for(int i=0; i<n; i++){
        cin >> a; 
        v.push_back(a);
    }

    for(int i=0; i<n; i++){
        if(v[i] == 1)
            count++;
    }


    if(count >=1)
        cout << "hard";

    else
        cout << "easy";
    // your code here

return 0;
}   