#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int sm(int a, int b){
    return(a<b ? a:b);
}

int main()
{

    int a, b; 
    cin >> a >> b;
    cout << sm(a, b)<< " " << (abs(a-b)/2);
    return 0;

}   