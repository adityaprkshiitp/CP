#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct Interval {
    int start, end;
};

bool check(Interval res){


}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n; scanf("%lld",&n);
    ll order_no[n]; 
    ll prep_time[n];
    ll serve_time[n], res[n];
    for (ll i = 0; i < n; ++i) {
        scanf("%lld",&order_no[i]);
        scanf("%lld",&prep_time[i]);
        serve_time[i] = order_no[i] + prep_time[i];
        res[n] = i;
    }
    sort(res, res + n, check);
    for (ll i = 0; i < n; ++i) {
        printf("%lld ",res[i]);
    }
    return 0;
}