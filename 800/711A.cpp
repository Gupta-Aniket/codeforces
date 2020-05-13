#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    // your code goes here
    int n;
    cin >> n; 
    char a;
    vector<vector<char> > A; 
    for(int i=0; i<n; i++){
        vector<char> V;
        for(int j=0; j<5; j++){
            cin >> a;
            V.push_back(a);
        }
        A.push_back(V);
    }

    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            if(A[i][j+1] == 'O' && A[i][j] == 'O'){
                count = 1; 
                A[i][j+1]='+';
                A[i][j] = '+';
                break;
                }
        }
        if(count == 1)
            break;
    }


    if(count > 0){
        cout << "yes" << endl;
        for(int i=0; i<n; i++){
             for(int j=0; j<5; j++){
                 cout << A[i][j];
             }
             cout << endl;
         }
        }

    else
        cout << "no";
    // your code goes here
    return 0;
}