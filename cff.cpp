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
    int t; cin >> t;
    while(t--){
        int h,n; cin >> h >> n;
        vec a(n),c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        vec d(c); 
        int turns = 0;
        while(h>0){
            turns++;
            for (int i = 0; i < n; i++)
            {
                if(c[i] == d[i]){
                    h -= a[i];
                    c[i] = 0;
                }else{
                    c[i]++;
                }
            }
        }
        cout << turns << endl;

    }
    
    return 0;
}