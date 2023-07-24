#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t; scanf("%lld",&t);
    while(t--){
        ll n; scanf("%lld",&n);
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        if(!is_sorted(arr,arr+n)){
            cout << 0 << endl;
            continue;
        }
        ll minn = 1e9;
        for (ll i = 0; i < n - 1; i++)
        {
            if(arr[i+1] - arr[i] < minn){
                minn = arr[i+1] - arr[i];
            }
        }
        ll res;
        res = minn/2 + 1;
        cout << res << endl;
    }

    return 0;
}
