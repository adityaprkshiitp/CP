#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    string a;
    vector<string> res;
    string ans;
    int count = 0;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == ' '){
            // a += ' ';
            res.push_back(a);
            a.clear();
        }
        if(i == n-1){
            a += s[i];
            res.push_back(a);
            break;
        }
        a += s[i];
    }
    for (int i = res.size()-1; i >= 0; i--){
        // if(res[i][0] == ' '){res[i].erase(res[i].size()-1);}
        ans += res[i];
    }
    ans.erase(ans.size()-1);
    return ans;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s; getline(cin,s);
    cout << reverseWords(s);
}