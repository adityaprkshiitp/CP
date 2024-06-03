#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        // if(s.find_first_of('_') == true){
        //     sort(s.begin(),s.end());
        // }
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '_'){
                sort(s.begin(),s.end());
            }
        }
        
        // for (int i = 0; i < s.size(); i++)
        // {
        //     cout << s[i];
        // }
        // cout << endl;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == s[i+1]){
                i++;
            }else if(s[i] == s[i-1]){
                //
            }else if(s[i] == '_'){
                cout << "YES" << endl;
                // cout << "ooga booga" << endl;
                count++;
                break;
                
            }else{
                cout << "NO" << endl;
                count++;
                break;
            }
        }
        if(count==0){
            cout << "YES" << endl;
            // cout << "ooga" << endl;
        }
    }

    return 0;
}