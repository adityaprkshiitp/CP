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
        int n,x; cin >> n >> x;
        int a = 1, b = 1, c = 1;
        ll cnt = 0;
        while( a + b + c <= x && ((a*b) + (b*c) + (c*a)) <= n){
            int arr[3] = {a,b,c};
            do{
                cnt++;
            } while (next_permutation(arr,arr+3));
            c++;
            if(a+b+c == x){
                c--;
                b++;
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}