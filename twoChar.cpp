#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool check(string t){
    if(t.size() < 2){return 0;}
    char a = t[0];
    char b = t[1];
    if(a == b){return 0;}
    for (int i = 1; i < t.size(); i++){
        if(t[i - 1] == t[i]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    string s; cin >> s;
    int maxi = 0;
    for (char i = 'a'; i <= 'z'; i++){
        for (char j = 'a'; j <= 'z'; j++){
            string t;
            for (int a = 0; a < s.size(); a++){
                if(s[a] == i || s[a] == j){t += s[a];}
            }
            int size_t = t.size();
            if(check(t)){maxi = max(maxi,size_t);}
        }
    }
    cout << maxi << endl;
    return 0;
}
