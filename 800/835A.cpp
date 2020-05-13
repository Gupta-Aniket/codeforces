#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
 
int main()
{
    // your code goes here
    int s, v1, v2, t1, t2; 
    cin >> s >> v1 >> v2 >> t1 >> t2; 
    if(((s*v1) + (t1*2)) < ((s*v2) + (t2*2))) 
        cout << "First";

    else if(((s*v1) + (t1*2)) > ((s*v2) + (t2*2)))
        cout << "Second";
    else
        cout << "Friendship";
    
    // your code goes here
    return 0;
}