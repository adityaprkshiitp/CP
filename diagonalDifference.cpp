#include <bits/stdc++.h>
#include <math.h>
using namespace std;


int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    
    int a = 0,b =0;
    for (int i = 0; i < n; i++){
        a += arr[i][i];
        b += arr[i][n-1-i];
    }
    int mid = a - b;
    int sum = abs(mid);
    cout << sum;
    return 0;
}