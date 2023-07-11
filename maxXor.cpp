#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int l; scanf("%d",&l);
    int r; scanf("%d",&r);
    int arr[r-l];
    int j = 0;
    for (int i = l; i < r + 1; i++)
    {
        arr[j] = i;
        j++;
    }

    // for (int i = 0; i < r; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");
    

    int maximum = 0;

    for (int i = 0; i < r-l + 1; i++)
    {
        for (int j = 0; j < r-l + 1; j++)
        {
            maximum = max(maximum, arr[i]^arr[j]);
        }
    }
    
    printf("%d",maximum);
    return 0;
}
