#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int	main()
{
    ll t; cin >> t;
    int i = 0;
    int n;
        do
        {
            n = (i*2) + 4;
            i = n - 1;
            if(n>t){
                cout << n - t;
            }
        } while (n<=t);

    return 0;
}
