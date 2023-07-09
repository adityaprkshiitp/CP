#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll q; scanf("%lld",&q);;
    while(q--){
        ll n; scanf("%lld",&n);;
        ll k; scanf("%lld",&k);;
        ll arr[n];
        ll brr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%lld",&brr[i]);
        }
        sort(arr, arr + n, greater<int>());
        sort(brr, brr+n);

        // printf("A : ");
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%lld ",arr[i]);
        // }
        // printf("\nB : ");
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%lld ",brr[i]);
        // }
        // printf("\n");

        ll i = 0;
        while(arr[i] + brr[i] >= k && i < n){
            i++;
        }
        if( i == n){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        // printf("\n");

    }
    return 0;
}
