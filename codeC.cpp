#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll numCountFront(ll x, ll n, ll k, vector<ll> vec){
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        if(x == vec[i]){
            count++;
            if(count == k){
                return i; 
            }
        }
    }
    return 10000000;
    
}

ll numCountBack(ll x, ll n, ll k, vector<ll> vec, ll start){
    ll count = 0;
    for (ll i = n-1; i >= start; i--)
    {
        if(x == vec[i]){
            count++;
            if(count == k){
                return 1; 
            }
        }
    }
    return 0;
    
}

int main(int argc, char const *argv[])
{
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ll t; scanf("%lld",&t);
    while(t--){
        ll n; scanf("%lld",&n);
        ll k; scanf("%lld",&k);
        vector<ll> vec;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            scanf("%lld",&temp);
            vec.push_back(temp);
        }
        ll res1 = numCountFront(vec[0],n,k,vec);

        if(vec[0] == vec[n-1] && res1 != 10000000){
            printf("YES\n");
            continue;
        }
        if(k==1){
            printf("YES\n");
            continue;
        }
        if(res1 == 10000000){
            printf("NO\n");
            continue;
        }

        ll res2 = numCountBack(vec[n-1],n,k,vec,res1);
        // cout << "res1 : " << res1 << " res2: " << res2 << " ";
        if(res2){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        

        
    }
    return 0;
}
