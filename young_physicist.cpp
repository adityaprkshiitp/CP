#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int x[n],y[n],z[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }
    int xt=0,yt=0,zt=0;
    for (int i = 0; i < n; i++)
    {
        xt=x[i]+xt;
    }
    for (int i = 0; i < n; i++)
    {
        yt=y[i]+yt;
    }
    for (int i = 0; i < n; i++)
    {
        zt=z[i]+zt;
    }
    if(xt==0 && yt==0 && zt==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
return 0;
}