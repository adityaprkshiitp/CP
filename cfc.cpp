#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vec;

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
        int maxi = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            maxi = max(maxi,arr[i]+i);
        }
        cout << maxi << endl;
    }
    return 0;
}