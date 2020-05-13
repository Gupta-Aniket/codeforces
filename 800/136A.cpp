#include<string>
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a[10];
    vector<int> v;  
    int n,e;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>e;
        v.push_back(e);
    }
    for (int i = 0; i < n; ++i) {
        a[v[i]]=i+1;
    }
    for (int i = 1; i <= n; ++i) {
        cout<<a[i]<<" ";
    }
    return 0;
}