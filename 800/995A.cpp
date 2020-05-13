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
    int count = 0;
    while (n != 0){
        if(n >= 100){
            n = n-100;
            count ++; 
            }

        else if(n >= 20){
            n -= 20; 
            count ++;
            }
        
        else if(n >= 10){
            n -= 10;
            count ++;
        }

        else if(n >= 5){
            n -= 5; 
            count ++;
        }

        else {
            n--; 
            count ++;
        }

}
        cout << count; 
    // your code goes here
    return 0;
}