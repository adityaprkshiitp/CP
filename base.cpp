#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

const int MOD = 1000000007;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; scanf("%d",&t);
    while(t--){
        // base input
        ll n; scanf("%lld",&n);
        ll m; scanf("%lld",&m);
        ll k; scanf("%lld",&k);
        // input for array
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        // input for vector
        vec v1(n);
        ll v1_size = v1.size();
        for (ll i = 0; i < v1_size; i++)
        {
            ll temp;
            scanf("%lld",&temp);
            v1.push_back(temp);
        }
        
        
    }

    return 0;
}
