#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int n; scanf("%d",&n);
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n);
    ll x[n],y[n],z[n],sum[n];
    int j = 0;
    ll maximum = 0;
    int count = 0;
    for (int i = 0; i < n-2; i++)
    {
        if(arr[i] + arr[i+1] > arr[i+2] && arr[i] + arr[i+2] > arr[i+1] && arr[i+1] + arr[i+2] > arr[i]){
            x[j] = arr[i];
            y[j] = arr[i+1];
            z[j] = arr[i+2];
            sum[j] = x[j] + y[j] + z[j];
            maximum = max(maximum,sum[j]);
            count++;
        }
    }
    for (int i = 0; i < j + 1; i++)
    {
        if(maximum == sum[i]){
            printf("%lld %lld %lld",x[i],y[i],z[i]);
        }
    }
    if(count == 0){
        printf("-1");
    }
    return 0;
}