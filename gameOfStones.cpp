#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int div[] = {7,14,21,28,35,42,49,56,63,70,77,84,91,98};
        int count = 0;
        int ex = sizeof(div)/sizeof(div[0]);
        for (int i = 0; i < ex; i++){
            if(n==div[i] || n==div[i] + 1 || n==1){
                count++;
            }
        }
        puts((count)?"Second":"First");
    }
    return 0;
}