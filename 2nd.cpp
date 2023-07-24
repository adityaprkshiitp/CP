#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll sq(ll x){
	return x * x;
}

void solve(ll n, ll k, ll arr[], ll low, ll high){
    ll mid = (low + high)/2;
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        res += sq(arr[i] + mid);
    }
    if(res > k){
        high = mid;
        solve(n,k,arr,low,high);
    }
    if(res < k){
        low = mid;
        solve(n,k,arr,low,high);
    }
    if(res == k){
        printf("%lld\n",mid/2); 
        break;
    }
    
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    // input
    ll t; scanf("%lld",&t);
    while(t--){
        ll n,k;
        scanf("%lld %lld",&n,&k);
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        ll low = 1;
        ll high = 1000000000;
        solve(n,k,arr,low,high);

    }
    
    return 0;
    
}