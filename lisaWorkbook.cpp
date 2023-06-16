#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k; scanf("%d %d",&n,&k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int pg_no = 1;
    int beautiful_no = 0;
    for (int i = 0; i < n; i++)
    {
        int quotient = arr[i]/k;
        int remainder = arr[i]%k;
        int c1;
        for (int j = 1; j <= arr[i] ; j++)
        {
            // cout << j << " ";
            c1 = 0;
            if(pg_no == j){
                beautiful_no++;
                // cout << " % ";
            }
            if(j%k==0){
                pg_no++;
                c1++;
                // cout << pg_no << " : " << i << endl;
            }
        }
        if(c1 == 0){
            pg_no++;
        }
        // cout << endl;

    }
    
    printf("%d",beautiful_no);

    return 0;
}