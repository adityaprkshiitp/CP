#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vec arr(n);
        vec mid;
        mid.push_back(0);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for (int i = 0; i < n-1; i++){
            if(arr[i+1] >= arr[i]){
                //
            }else{
                mid.push_back(arr[i] - arr[i+1]);
                arr[i+1] = arr[i];
            }
        }
        int x = mid.size()-1;
        sort(mid.begin(),mid.end());
        ll res = 0;
        for(int i = 0; i < mid.size()-1; i++){
            res += (mid[i+1] - mid[i])*(x-i+1);
        }
        cout << res << endl;
        
        
    }
    return 0;
}