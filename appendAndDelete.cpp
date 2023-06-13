#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    int k; cin >> k;
    int count=0;
    while(count<s.size() && count<t.size()){
        if(s[count]!=t[count]) break;
        count++;
    }
    if(s.size()-count+t.size()-count<=k && (s.size()-count+t.size()-count)%2==k%2){
        cout<<"Yes"<<endl;
    }else if(s.size() +t.size() <=k){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}