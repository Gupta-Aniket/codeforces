#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 #define fo(i, n) for(int i=0; i<n; i++);
using namespace std;
 
int main(){
    // your code goes here
   int n;
	cin >> n;
	
	vector<int> cnt(101);
	fo(i, n){
		int x;
		cin >> x;
		++cnt[x];
	}
	
	cout << *max_element(cnt.begin(), cnt.end()) << endl;


    // your code goes here
    return 0;
}