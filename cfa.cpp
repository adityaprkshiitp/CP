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
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        vector<int> freq(5,0);
        for (int i = 0; i < n*4; i++){
            if(s[i] == 'A'){freq[0]++;}
            if(s[i] == 'B'){freq[1]++;}
            if(s[i] == 'C'){freq[2]++;}
            if(s[i] == 'D'){freq[3]++;}
            if(s[i] == '?'){freq[4]++;}
        }
        // for (int i = 0; i < 4; i++)
        // {
        //     cout << freq[i] << ' ';
        // }cout << endl;
        
        int cnt = 0;
        for (int i = 0; i < 4; i++)
        {
            if(freq[i] < n){
                cnt+= freq[i];
            }else{
                cnt+=n;
            }
        }
        cout << cnt << endl;
        
        
    }
    
  
}