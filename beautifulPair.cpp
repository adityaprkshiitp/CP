#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    int n;
    cin>>n;
    vector<int> a(1000, 0),b(1000, 0);
    for(int i = 0;i < n;i++){
        int c;
        cin>>c;
        a[c]++;
    }
    for(int i = 0;i < n;i++){
        int c;
        cin>>c;
        b[c]++;
    }
    int r = 0;
    for(int i = 1;i <= 1000;i++){
        r += min(a[i], b[i]);
    }
    cout<<(r==n?n-1:r+1);
    return 0;
}