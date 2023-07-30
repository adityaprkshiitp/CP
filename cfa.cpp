#include <iostream>
#include <vector>
#include <algorithm>
typedef long long int ll;

using namespace std;

ll check( ll count){
    ll res = 0;
    if(count == 0){
        return 0;
    }else if(count == 1){
        return 1;
    }else{
        res += count/2;
        res += count%2;
        return res;
    }
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
        ll n;
        vector<ll> vec;
        scanf("%lld",&n);
        // if(n==1){
        //     printf("0\n");
        //     continue;
        // }
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            scanf("%lld",&temp);
            vec.push_back(temp);
        }

        ll count =  0;
        for (int i = 0; i < n; i++)
        {
            // cout << " vec[i] : " << vec[i] << " i + 1 : " << i+1 << endl;

            if(vec[i] == i + 1){
                count++;
            }
        }
        // cout << "count : " << count << endl;
        ll res = check(count);
        printf("%lld\n",res);
        
    }
    return 0;
}
