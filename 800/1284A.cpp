#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    // your code goes here
    int n1, n2; 
    cin >> n1 >> n2;
    vector<string> s1; 
    string n, m; 
    vector<string> s2; 

    int a; 
    vector<int> v; 

    for(int i=0; i<n1; i++){ // this is to store the first 10 set of strings
        cin >> n; 
        s1.push_back(n);
    }

    for(int i=0; i<n2; i++){ // this is to store the second set
        cin >> m;
        s2.push_back(m);
    }
    cin >> a;
    for(int i=0; i<a; i++){
        int temp; cin >> temp;
        v.push_back(a);
    }

    for(int i=0; i<a; i++){
        cout << s1[v[i]] << s2[v[i]] << endl;
    }   
    // your code goes here
    return 0;
}