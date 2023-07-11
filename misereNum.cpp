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
    int t; scanf("%d",&t);
    while(t--){
        ll n; scanf("%lld",&n);
        ll sum = 0;
        ll result = 0;
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            scanf("%lld",&temp);
            result ^= temp;
            if(temp<=1) count++;
        }
        if((count == n && result != 0) || (count < n  && result == 0)){
            printf("Second\n");
        }else{
            printf("First\n");
        }
        
    }

    return 0;
}
