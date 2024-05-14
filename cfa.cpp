#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll s,t,a,b,m,n,sum1,sum2; cin >> s >> t >> a >> b >> m >> n;
    ll arr1[m],arr2[n];
    sum1 = 0;
    sum2 = 0;
    for (ll i = 0; i < m; i++){
        cin >> arr1[i];
        arr1[i] = arr1[i] + a;
        if(arr1[i] >= s && arr1[i] <= t){sum1++;}
    }
    for (ll i = 0; i < n; i++){
        cin >> arr2[i];
        arr2[i] = arr2[i] + b;
        if(arr2[i] >= s && arr2[i] <= t){sum2++;}
    }
    cout << sum1 << endl << sum2;
    return 0;
}
