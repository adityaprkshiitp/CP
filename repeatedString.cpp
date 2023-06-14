#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    string s; cin >> s;
    ll n; cin >> n;

    if(s.size() < n){
        ll quotient = n/s.size();
        ll remainder = n%s.size();
        ll count = 0;
        ll remainderCount = 0;
        for (ll i = 0; i < s.size(); i++){
            if(s[i] == 'a'){
                count++;
            }
        }
        for (ll i = 0; i < remainder; i++){
            if(s[i] == 'a'){
                remainderCount++;
            }
        }
        
        ll result = (count * quotient) + remainderCount;
        cout << result;
    }else if(s.size() == n){
        int count = 0;
        for (int i = 0; i < n; i++){
            if(s[i] == 'a'){
                count++;
            }
        }
        cout << count;
        
    }else{
        int count = 0;
        for (int i = 0; i < n; i++){
            if(s[i] == 'a'){
                count++;
            }
        }
        cout << count;
    }


    return 0;
}