#include<bits/stdc++.h>
using namespace std;

int veryBigSum(int n,int arr[]){
    int xt = 0;
    for (int i = 0; i < n; i++){
        xt += arr[i];
    }
    return xt;
}

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

    int xt = veryBigSum(n,x);
    int yt = veryBigSum(n,y);
    int zt = veryBigSum(n,z);

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