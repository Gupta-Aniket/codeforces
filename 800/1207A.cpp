#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    // your code goes here
    int b, p, f, h, c, n;
    int profit;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> b >> p >> f >> h >> c; 
        if(b > 1){
            profit += (p*h) ;
            b -= 2;
            profit += (f*c);
            b -= 2; 
            cout << profit << endl; 
        }

        else
            cout << "0";

    }
    // your code goes here
    return 0;
}