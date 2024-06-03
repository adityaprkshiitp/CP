#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin  >> n;
    vec arr(n);
    vec res(100,0);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        res[arr[i]]++;
    }
    // for counting sort 1
    // for (int i = 0; i < 100; i++)
    // {
    //     cout << res[i] << " ";
    // }

    // for counting sort 2
    for (int i = 0; i < res.size(); i++){
        for (int j = 0; j < res[i]; j++){
            cout << i << " ";
        }
        
    }
    
    return 0;
}