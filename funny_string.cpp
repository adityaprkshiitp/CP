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
        string s; cin >> s;
        string s1 = s;
        reverse(s1.begin(),s1.end());
        int count = 0;
        for (int i = 0; i < s.size(); i++){
            if(abs(s[i] - s[i+1]) == abs(s1[i] - s1[i+1])){
                count++;
            }
        }
        if(count == s.size() - 1){
            cout << "Funny" << endl;
        }else{
            cout << "Not Funny" << endl;
        }
    }
    return 0;
}