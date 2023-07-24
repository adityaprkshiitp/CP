#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // input
    ll n; scanf("%lld",&n);
    set<ll, greater<ll> > ranked;
    for (ll i = 0; i < n; i++){
        ll temp;
        scanf("%lld",&temp);
        ranked.insert(temp);
    }
    vector<int> v(ranked.begin(), ranked.end());
    ll m; scanf("%lld",&m);
    for (ll i = 0; i < m; i++)
    {
        ll temp1;
        scanf("%lld",&temp1);
        // ranked.insert(temp1);
        // auto pos = ranked.find(temp1);
        // ll lk = distance(ranked.begin(), pos);
        // printf("%lld\n",lk + 1);
        // ranked.erase(temp1);

        int pos = upper_bound(v.begin(), v.end(), temp1) - v.begin();
        printf("%d\n", (int)v.size() - pos + 1);

    }
    
    
    return 0;
}
