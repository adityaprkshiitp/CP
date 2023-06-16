#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    
    // input
    ll p; cin>>p;
    ll q; cin>>q;
    vector<ll> res;
    
    // actual code
    for(ll i=p; i<=q; ++i){
        ll sq = i*i;
        string s = to_string(sq);
        int d = s.size()/2;
        if(d == 0){
            if(i == sq){
                res.push_back(i);
            }
            continue;
        }
        if(stoll(s.substr(0,d))+stoll(s.substr(d,s.size()-d)) == i){
            res.push_back(i);
        }
    }

    // output
    if(res.size()>0){
        for(int i=0; i<res.size(); ++i){
            cout<<res[i]<<" ";
        }
        cout<<endl;}
    else{
        cout<<"INVALID RANGE"<<endl;
    }

    return 0;
}