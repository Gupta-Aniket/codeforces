#include<iostream>
#include<string.h>
#include<math.h>
 
using namespace std;
 
int main(){
    // your code here
    int n; 
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%2 == 1){
            cout << "I hate ";
            if(i<n)
                cout << "that ";
        }
 
        if(i%2 == 0){
            cout << "I love ";
            if(i<n)
                cout << "that ";
        }
 
    }
    
    cout << "it ";
    // your code here
    return 0;
}