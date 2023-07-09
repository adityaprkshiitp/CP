#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ll t; scanf("%lld",&t);
    while(t--){
        ll k; scanf("%lld",&k);
        ll n; scanf("%lld",&n);
        ll arr[k];
        for (ll i = 0; i < k; i++)
        {
            scanf("%lld",&arr[i]);
        }
        ll maximum;
        ll minimum;
        if(k%n==0){
            maximum = *max_element(arr, arr + k);
            minimum = *min_element(arr, arr + k);
            printf("%lld\n",maximum - minimum);
        }else{
            ll mid = k/n;
            printf("%lld\n",mid+1);
        }
    }
    return 0;
}
