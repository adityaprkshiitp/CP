#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t; scanf("%d",&t);
    while(t--){
        int n;
        int m;
        int k;
        int H;
        scanf("%d",&n);
        scanf("%d",&m);
        scanf("%d",&k);
        scanf("%d",&H);
        // cout << " YO " << endl;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            scanf("%d",&temp);
            int x = abs(H - temp);
            if(x % k == 0 && x <= (m-1)*k && x != 0){
                count++;
            }
        }

        printf("%d\n",count);
        
    }
    return 0;
}
