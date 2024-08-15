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
        int k; cin >> k;
        vector<int> res(k);
        for (int i = 0; i < k; i++)
        {
            cin >> res[i];
        }
        for (int i = 1; i < k; i++)
        {
            int ans = res[i] | res[i-1];
            cout << ans << ' ';
        }
        cout << endl;
        
        
        
        
    }
    return 0;
}