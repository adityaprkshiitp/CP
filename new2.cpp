#include <bits/stdc++.h>

using namespace std ;

int countDistinctColorings(int n, string domino[])
{
    long long ans = 1, mod = 1e9 + 7 ;
    vector<int> s ;
    string a = domino[0], b = domino[1] ;
    for(int i=0;i<n;i++){
        if(i==n-1){
            s.push_back(1);
            break;
        }
        if(a[i]==a[i+1]){
            i++;
            s.push_back(2);
        }
        else s.push_back(1);
    }
    if(s[0]==2) ans=6;
    else ans=3;
    for(int i=1;i<(int)s.size();i++){
        if(s[i]==1){
            if(s[i-1]==1) ans=(2*ans+mod)%mod;
            else continue;
        }
        else{
            if(s[i-1]==1) ans=(2*ans+mod)%mod;
            else ans=(3*ans+mod)%mod;
        }
    }
    return ans ;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n ;
    string domino[2] ;
    cin >> domino[0] ;
    cin >> domino[1] ;
    cout << countDistinctColorings(n, domino) ;

    //int arr[] = {1, 5, 5, 1} ;
    //calculateCost(4, arr, 2) ;

    return 0 ;
}


