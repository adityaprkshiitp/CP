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
    int n; cin >> n;
    string s; cin >> s;
    int k; cin >> k;
    k %= 26;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(s[i] + k <= 'z'){
                s[i] = s[i] + k;
                cout << s[i];
                continue;
            }else{
                s[i] = 'a' + s[i] + k - 'z' - 1;
                cout << s[i];
                continue;
            }
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            if(s[i] + k <= 'Z'){
                s[i] = s[i] + k;
                cout << s[i];
                continue;
            }else{
                s[i] = 'A' + s[i] + k - 'Z' - 1;
                cout << s[i];
                continue;
            }
        }
        cout << s[i];
    }
    
    return 0;
}