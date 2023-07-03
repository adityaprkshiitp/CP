#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vec;
void removeInt(int arr[],int n, int x){
    n--;
    for (int i = x; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // input
    int n; scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);

    }
    int m; scanf("%d",&m);
    int brr[m];
    int max = m;
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&brr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < max; j++)
        {
            if(arr[i] == brr[j]){
                // printf("%d : %d\n",arr[i],brr[j]);
                removeInt(brr,m,j);
                m--;
                break;
            }
        }
        
    }
    sort(brr, brr + m);
    // printf(" m : %d\n",m);
    set<int> sa;
    for (int i = 0; i < m; i++)
    {
        sa.insert(brr[i]);
    }
    
    
    // for (int i = 0; i < m; i++)
    // {
    //     printf("%d ",brr[i]);
    // }
    for (auto i : sa) {
        if(i<10000*2){
            cout << i << ' ';
        }
    }
    

    
    return 0;
}