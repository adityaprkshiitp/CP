#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

const int MOD = 1000000007;

string rev(string s){
    string r;
    for(int i = 0; i < s.length(); i ++)
        r = string("") + s[i] + r;
    return r;
}

string funnyString(string s) {
    int n = s.size();
    string a = rev(s);
    
    bool check = true;
    for(int i = 1; i < s.length(); i ++){
		if(abs(s[i] - s[i - 1]) != abs(a[i] - a[i - 1])) check = false;
    }
    
    
    if(check){
        return "Funny";
    }else{
        return "Not Funny";
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; scanf("%d",&t);
    while(t--){
        string s;
        cin >> s;
        cout << funnyString(s) << endl;
        
    }

    return 0;
}
