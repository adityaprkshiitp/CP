#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,m;
    cin>>n>>m;
    int x[m];
    for (int i = 0; i < m; i++)
    {
        cin>>x[i];
    }
    
    sort(x,x+m);
    int C=x[n-1]-x[0];
    for (int i = 1; i <= m-n; i++)
    {
        C=min(x[i+n-1]-x[i],C);
    }
    cout<<C;
    return 0;
}