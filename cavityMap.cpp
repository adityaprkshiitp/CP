#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; scanf("%d",&n);
    string v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if( v[i][j] > v[i+1][j] && v[i][j] > v[i-1][j] && v[i][j] > v[i][j+1] && v[i][j] > v[i][j-1]){
                v[i][j] = 'X';
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
        // cout << endl;
        
    }
    
    return 0;
}