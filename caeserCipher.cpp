#include <bits/stdc++.h>
using namespace std;

string caesarCipher(string s, int k) {
    string res;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if(s[i] <= 'z' && s[i] >= 'a'){
            char x = (s[i] - 'a' + k);
            x %= 26;
            x += 'a';
            res.push_back(x);
        }else if(s[i] <= 'Z' && s[i] >= 'A'){
            char x = (s[i] - 'A' + k);
            x %= 26;
            x += 'A';
            res.push_back(x);
        }else {
            res.push_back(s[i]);
        }
    }
    return res;
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; scanf("%d",&n);
    string s;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    int k; scanf("%d",&k);
    string ans;
    ans = caesarCipher(s,k);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
    

    return 0;
}
