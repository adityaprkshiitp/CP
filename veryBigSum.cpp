#include <bits/stdc++.h>
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
    long long int a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    
    cout << sum;
    return 0;
}