#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

const int MOD = 1000007;

bool check_num(vec mid, ll x){
    int size_mid = mid.size();
    for (int i = 0; i < size_mid; i++)
    {
        if(mid[i] == x){
            return true;
        }
    }

    return false;
    
}

bool check_numbig(vec mid, ll x){
    int size_mid = mid.size();
    for (int i = 0; i < size_mid; i++)
    {
        if(mid[i] > x){
            return true;
        }
    }

    return false;
    
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
        vec mid;
        ll size_of_arr = (n*(n-1))/2;
        for (ll i = 0; i < size_of_arr; i++)
        {
            scanf("%lld",&arr[i]);
        }
        for (int i = 0; i < size_of_arr; i++)
        {
            if(check_num(mid,arr[i]) && check_numbig(mid,arr[i])){
                continue;
            }else if(check_numbig(mid,arr[i])){
                mid.push_back(arr[i]);
            }else if(check_num(mid,arr[i])){
                continue;
            }else{
                mid.push_back(arr[i]);
                mid.push_back(arr[i] + 3);
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << mid[i] << " ";
        }
        cout << endl;
        
       
    }

    return 0;
}
