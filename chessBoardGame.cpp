#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(int argc, char const *argv[])
{
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int m; scanf("%d",&m);
        if(n+m%2==0){
            printf("First\n");
        }else{
            printf("Second");
        }
    }
    return 0;

}

