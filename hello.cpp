#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    int t; cin >> t;
    
    while(t--) {
        int n,m,s; cin >> n >> m >> s;
        --s; --m;
        s += m;
        s %= n;
        s++;
        cout << s << endl;
    }
    return 0;
}