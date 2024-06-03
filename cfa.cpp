#include<bits/stdc++.h>
using namespace std;
const int sz = ceil(log2(10));
typedef long long int ll;
typedef vector<ll> vec;
#define MAX 1000000007;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        // cout << t << " ";
        // input
        int n; cin >> n;
        vec a1(n),b1(n);
        for (int i = 0; i < n; i++){
            cin >> a1[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b1[i];
        }
        int m; cin >> m;
        vec d1(m);
        for (int i = 0; i < m; i++){
            cin >> d1[i];
        }

        vec res1;
        for (int i = 0; i < n; i++){
            if(a1[i] != b1[i]){
                res1.push_back(b1[i]);
                // cout << a1[i] << " " << b1[i] << " "; 
            }
        }
        // cout << endl;
        // for (int i = 0; i < res1.size(); i++)
        // {
        //     cout << res1[i] << " ";
        // }
        
        int count = 0;
        int maxi = 0;
        bool check = false;
        for (int j = 0; j < res1.size(); j++){
            if(d1[m-1] == res1[j]){
                check = true;
            }
        }
        for (int j = 0; j < n; j++){
            if(d1[m-1] == b1[j]){
                check = true;
            }
        }
        for (int i = m - 1; i >= 0; i--)
        {
            for (int j = 0; j < res1.size(); j++)
            {
                if(d1[i] == res1[j]){
                    // cout << i << " : " << d1[i] << " ";
                    count++;
                    res1[j] == 0;
                    break;
                }
            }
        }
        if(count == res1.size() && check == true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
        
        
    }
    
    return 0;
}