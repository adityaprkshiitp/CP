#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mostFrequent(ll arr[], ll n)
{
    // code here
    ll maxcount = 0;
    ll element_having_max_freq;
    for (ll i = 0; i < n; i++) {
        ll count = 0;
        for (ll j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
  
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }
  
    return element_having_max_freq;
}

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
        ll res = mostFrequent(arr,n);
        ll count = 0;
        for(ll i = 0; i < n; i++) {
            if(arr[i] == res) {
                count++;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
