#include<iostream>
#include<string.h>
#include<math.h>
 
using namespace std;
 
int main(){
    // your code here
    int a, b; 
    cin >> a >> b; 
 
for(int i=1; i<=10; i++){
    a *= 3;
    b *= 2; 
    if(a>b){
        cout << i << endl;;
        break;
        }
}
    // your code here
    return 0;
}