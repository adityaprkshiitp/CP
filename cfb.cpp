#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
typedef vector<ll> vec;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ll t; scanf("%lld",&t);
    while(t--){
        ll n; scanf("%lld",&n);
        ll count = 0;
        // for (ll i = 1; i <= n/2; i++) {
        //     if (n % i == 0) {
        //         // cout << i << " ";
        //         count++;
        //     }
        // }
        ll i = 1;
        while(n % i == 0){
            count++;
            i++;
        }
        printf("%lld\n",count);

    }
    
    return 0;
}
