#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vec;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s; cin >> s;

    // piche se tha
    // int x = s.size();
    // stack<int> st;
    // while(x--){
    //     if(s[x] == '-' && s[x-1] == '-'){
    //         st.push(2);
    //     }else if(s[x] == '.' && s[x-1] == '-'){
    //         st.push(1);
    //     }else if(s[x] == '.'){
    //         st.push(0);
    //     }
    // }
    // while(st.size()){
    //     cout << st.top();
    //     st.pop();
    // }

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '-' && s[i+1] == '-'){
            cout << 2;
            i++;
        }else if(s[i] == '-' && s[i+1] == '.'){
            cout << 1;
            i++;
        }else if(s[i] == '.'){
            cout << 0;
        }
    }
    
    return 0;
}