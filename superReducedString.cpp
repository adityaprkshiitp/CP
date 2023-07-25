#include <bits/stdc++.h>
using namespace std;

void solve(string str, int n){
    for (int i = 0; i < n; i++)
    {
        if(str[i] == str[i+1]){
            str.erase(i,2);
            n -= 2;
            i = -1;
            // cout << " i : " << i << endl;
            // cout << str << endl;
        }
    }
    if(n==0){
        printf("Empty string");
    }else{
        cout << str;
    }
    
}

int main(int argc, char const *argv[])
{
    //  #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    string str;
    cin >> str;
    int n = str.size();
    solve(str,n);
    
    return 0;
}
