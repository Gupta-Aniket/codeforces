#include<iostream>
#include<string.h>
#include<math.h>
 
using namespace std;
 

int main(){
    // your code here
    int a, b, c, s;
    cin >> a >> b >> c; 

    int ans=init;
    if(a>=b+c)
        ans=min(a-(b+c)+1,ans);

    else if(b>=a+c)
        ans=min(ans,b-(a+c)+1);

    else if(c>=a+b)
        ans=min(ans,c-(a+b)+1);

    else
        ans=0;

    cout<<ans;
    // your code here
    return 0;
}