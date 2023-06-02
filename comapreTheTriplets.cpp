#include <bits/stdc++.h>
using namespace std;
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int a[3],b[3];
    int c = 0;
    int d = 0;
    for (int i = 0; i < 3; i++){
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++){
        cin >> b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i]){
            c++;
        } else if (a[i] < b[i]) {
            d++;
        } else if (a[i] == b[i]) {
            //
        }
    }
    cout << c << " " << d;

    return 0;
}