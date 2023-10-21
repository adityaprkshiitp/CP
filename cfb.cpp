#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

int k = 0;

ll* insertX(ll n, ll arr[],
            ll x, ll pos)
{
    k++;
    ll i;
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    // insert x at pos
    arr[pos - 1] = x;
 
    return arr;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; scanf("%d",&t);
    while(t--){
        ll n; scanf("%lld",&n);
        ll arr[n];
        ll brr[2*n];
        for (ll i = 0; i < n; i++)
        {
            scanf("%lld",&arr[i]);
            brr[i] = arr[i];
        }
        for (ll i = 1; i < n; i++)
        {
            if(arr[i-1] < arr[i]){
                if(arr[i-1] > 1){
                    insertX(2*n,brr,arr[i-1]-1,i);
                }
            }else if(arr[i] < arr[i-1]){
                if(arr[i] > 1){
                    insertX(2*n,brr,arr[i]-1,i);
                }
            }
        }
        cout << k + n << endl;
        for (int i = 0; i < k+n; i++)
        {
            cout << brr[i] << " ";
        }
        cout << endl;
        
        
        
    }

    return 0;
}
