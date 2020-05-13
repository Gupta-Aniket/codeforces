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
    int count; 
    if(n % 2 != 0){
        cout<< (n-1)/2 << endl;
    while (n > 3){
        cout << "2 ";
        n = n - 2;
    }
    cout << "3";
    }

    else{
        cout << n/2 << endl;
    while(n>1){
        cout << "2 ";

        n = n-2;
    }
    }

    // your code goes here
    return 0;
}