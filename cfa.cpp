#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t; scanf("%d",&t);
    while(t--){
        ll n,m;
        scanf ("%lld %lld",&n,&m);
        char mid[n][m];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> mid[i][j];
            }
        }
        bool check1 = false;
        bool check2 = false;
        bool check3 = false;
        bool check4 = false;
        bool final_check = false;

        for (int j = 0; j < m; j++){
            for (int i = 0; i < n; i++){
                if(mid[i][j] == 'v' && check1 == false){
                    // cout << i << " " << j << " " << mid[i][j] << endl;
                    check1 = true;
                    check2 = false;
                    break;
                }
                if(mid[i][j] == 'i' && check2 == false && check1 == true){
                    // cout << i << " " << j << " " << mid[i][j] << endl;
                    check2 = true;
                    check3 = false;
                    break;
                }
                if(mid[i][j] == 'k' && check3 == false && check2 == true){
                    // cout << i << " " << j << " " << mid[i][j] << endl;
                    check3 = true;
                    check4 = false;
                    break;
                }
                if(mid[i][j] == 'a' && check4 == false && check3 == true){
                    // cout << i << " " << j << " " << mid[i][j] << endl;
                    check4 = true;
                    final_check = true;
                    break;
                }
            }
        }
        
        // cout << "j1 j2 j3 j4 " << j1-1 << " " << j2-1 << " " << j3-1 << " " << j4-1 << endl;
        if(final_check == true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
