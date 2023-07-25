#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; scanf("%d",&t);
    while (t--)
    {
        int n; scanf("%d",&n);
        vector<vector<ll>> vec(n, vector<ll>(n));
        vector<ll> ball(n,0);
        vector<ll> container(n,0);
        ll temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%lld",&vec[i][j]);
                temp = vec[i][j];
                container[i] += temp;
                ball[j] += temp;
            }
            
        }
        sort(ball.begin(),ball.end());
        sort(container.begin(),container.end());
        
        // cout << "count : " << count << endl;
        if(ball == container){
            printf("Possible\n");
        }else{
            printf("Impossible\n");
        }
        // cout << "sum1 : " << sum1 << " sum2 : " << sum2 << endl;
        
    }
    
    return 0;
}
