#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int n = s.size();
    for (int i = 0; i < n;i++){
        if(s[i] == s[i+1]){
            s.erase(i,2);
            i-=2; n -= 2;
        }
        if(i==-2){i++;}      
    }
    (n<=0) ? cout << "Empty String" : cout << s;
    return 0;
}