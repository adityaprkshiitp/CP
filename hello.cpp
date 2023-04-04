#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t,a[100],b[100],n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
    }
    if(max(a[n],a[n-1])==a[n] || max(a[n],b[n])==b[n] || max(a[n],a[n-1])==b[n] || max(b[n],b[n-1])==b[n] || max(b[n],b[n-1])==b[n] )
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}