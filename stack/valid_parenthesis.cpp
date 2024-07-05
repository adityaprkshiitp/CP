#include <bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        stack<char> s1;
        s1.push(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(s1.size() == 0){s1.push(s[i]);i++;}
            if( (s[i] == ')' && s1.top() == '(') || (s[i] == ']' && s1.top() == '[') || (s[i] == '}' && s1.top() == '{') ){
                s1.pop();
            }else{
                s1.push(s[i]);
                // cout << s[i] << ' ';
            }
        }
        if(s1.empty()){return true;}
        else{return false;}
    }
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    string s; cin >> s;
    if(isValid(s)){
        cout << "True";
    }else{
        cout << "False";
    }
}