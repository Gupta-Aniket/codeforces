#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    // your code goes here
    long long n, a, sum = 0; 
    cin >> n;
 

    vector<long long> v; 
    for(long long i=0; i<n; i++){
        cin >> a; 
        v.push_back(a);
    }

    for(long long i=0; i<n; i++){
        sum += v[i];
    }

    if(sum %2 != 0){
        sum = sum - (*min_element(v.begin(), v.end()));
        cout << sum;

    }

    else
        cout << sum;
    // your code goes here
    return 0;
}