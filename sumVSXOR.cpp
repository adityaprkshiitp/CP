#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n; scanf("%lld",&n);
    // ll count = 0;
    // ll x;
    // for (ll i = 0; i < n + 1; i++)
    // {
    //     x = n^i;
    //     if(n + i == x ){
    //         count++;
    //         // printf("%d ",x);
    //     }
    // }
    // // printf("\n");
    // printf("%lld",count);

    ll i = 0;
    ll x = n^0;
    ll count = 0;
    while(i < n + 1){
        x = n^i;
        if(n + i == x){
            // printf("%lld ",x);
            count++;
        }
        i++;
    }
    printf("%lld",count);
    return 0;
}
