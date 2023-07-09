#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    // input
    ll n; scanf("%lld",&n);
    ll order_no[n]; 
    ll prep_time[n];
    vector< pair <ll,ll> > vect;
    for (ll i = 0; i < n; ++i) {
        scanf("%lld",&order_no[i]);
        scanf("%lld",&prep_time[i]);
        vect.push_back( make_pair(order_no[i] + prep_time[i],i) );

    }
    sort(vect.begin(), vect.end());
    
    // output
    for (ll i = 0; i < n; ++i) {
        printf("%lld ",vect[i].second + 1);
    }
    return 0;
}