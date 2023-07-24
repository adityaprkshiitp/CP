#include <bits/stdc++.h>
#include <iterator>
using namespace std;
typedef long long int ll;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; scanf("%d",&n);
    int k; scanf("%d",&k);
    set<ll> s1;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        scanf("%lld",&temp);
        s1.insert(temp);
    }
    vector<ll> yo{s1.begin(), s1.end()};
    map<int,int> vec;
    for (auto x : yo)
    {
        vec[x % k] += 1;
    }

    int res = 0;

    if(vec[0] > 0){
        res++;
    }
    for (int i = 1; i < k; i++)
    {
        if(vec[i] == 0) continue;
        if( 2*i == k) res++;
        else{
            res += max(vec[i], vec[k - i]);
            vec[i] = 0;
            vec[k - i] = 0;
        }
    }

    printf("%d",res);
    
    
    
    
    
    return 0;
}