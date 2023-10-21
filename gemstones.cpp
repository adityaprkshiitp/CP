#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

const int MOD = 1000000007;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; scanf("%d",&n);
    int count_arr[26] = {0};
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        set<char> check;
        int k = s.size();
        for (int i = 0; i < k; i++){
            int o = check.size();
            check.insert(s[i]);
            int new_o = check.size();
            if(new_o > o){
                count_arr[s[i] - 'a']++;
            }
        }
    }
    int res = 0;
    for (int i = 0; i < 26; i++)
    {
        if(count_arr[i] == n){
            res++;
        }
    }
    cout << res << endl;

    return 0;
}