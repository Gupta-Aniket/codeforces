#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
 
int main()
{
    // your code goes here  
    int n , a, b, c, d, k, x, y; 
    cin >> n;
    for(int i=0; i<n; i++){ 
        cin >> a >> b >> c >> d >> k;
         
        if(a%c==0)
            x=a/c;
        if(a%c!=0)
            x=a/c+1;
        if(b%d==0)
            y=b/d;
        if(b%d!=0)
            y=b/d+1;
        if((x+y)>k)
            cout<<"-1"<<endl;
        if((x+y)<=k)
            cout<<x<<" "<<y<<endl;
    }

    
    // your code goes here
    return 0;
}