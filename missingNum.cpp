#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vec;
#define MAX 1000001;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin  >> n;
    vec arr1(n);
    for (int i = 0; i < n; i++){cin >> arr1[i];}
    int m; cin >> m;
    vec arr2(m);
    for (int i = 0; i < m; i++){cin >> arr2[i];}
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    set<ll> s1;
    vec t1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        ll temp = arr1[i];
        for (int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j]){
                arr2.erase(arr2.begin() + j);
                count++;
                break;
            }
        }
        if(count == 0){
            s1.insert(temp);
        }
        
    }    
    for (int i = 0; i < arr2.size(); i++){
        s1.insert(arr2[i]);
    }
    for(auto it : s1){
        cout << it << ' ';
    }cout << endl;
    
    return 0;
}