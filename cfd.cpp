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
        int x,y,z,k; cin >> x >> y >> z >> k;
        ll count = 0;
        for (int i = y; i > 0; i--)
        {
            for (int j = x; j > 0; j--)
            {
                for (int a = z; a > 0; a--)
                {
                    if(i*j*a == k){
                        if(i < y && j < x && a < z){
                            count+=8;
                        }else if((i < y && j < x) || (j < x && a < z) || (a < z && i < y)){
                            count+=4;
                        }else if(i < y || j < x || a < z){
                            count+=2;
                        }
                    }
                }
                
            }
            
        }
        cout << count << endl;
    }
    
    return 0;
}