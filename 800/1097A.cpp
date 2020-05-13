#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;
 

int main(){
    // your code here
    string s1;
    vector<char> v; 
    string s2;
    bool tr;

    cin >> s1; 
    for(int i=0; i<4; i++){
        cin >> s2; 
        tr = strcmp(s1, s2);
    }

    if(tr = "true"){
        cout << "YES";
    }
    // your code here
    return 0;
}
 