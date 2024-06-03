#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

int main(){
    int n; cin  >> n;
    vector<pair<int, string>> arr;
    for (int i = 0; i < n; i++){
        int temp1; cin >> temp1;
        string s1; cin >> s1;
        if(i < n/2){s1 = '-';}
        pair<int,string> p1 = make_pair(temp1,s1);
        arr.push_back(p1);
    }
    for (int i = 0; i < 101; i++){
        for (int j = 0; j < n; j++){
            if(arr[j].first == i){
                cout << arr[j].second << " ";
            }
        } 
    }
    
    
}