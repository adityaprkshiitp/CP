#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; scanf("%d",&n);
    ll arr[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%llu",&arr[i]);
    }
    ll minimum = 1000000000;
    sort(arr,arr+n);
    for (int i = 0; i < n-1 ; i++)
    {
        minimum = min(minimum,llabs(arr[i] - arr[i+1]));
    }
    printf("%llu",minimum);
    
    return 0;
}