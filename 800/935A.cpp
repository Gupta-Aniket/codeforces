// 995A.cpp

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
    int count=0; 

    for(int i=1; i<=n; i++){
        if((n-i)%i == 0)
            count++;
    }

    cout << count-1;
    // your code goes here
    return 0;

}