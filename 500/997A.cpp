#include <iostream>
#include <math.h>
 
using namespace std;
 
int main(){
    //insert code here
    int a, k;
    cin >> a >> k;
    for(int i=1; i<= k; i++){
        if(a%10==0)
            a = a/10;
        else 
            a = a-1; 
    }
        cout << a;
 
    //insert code here
    return 0;
}