#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// int maxElement(int a[]){
//     int max = a[0];
//     for (int i = 1; i < 25; i++)
//     {
//         if(a[i] != NULL && a[i] > max){
//             max = a[i];
//         } 
//     }
    
//     return max;
// }

// int minElement(int a[]){
//     int min = a[0];
//     for (int i = 1; i < 25; i++)
//     {
//         if(a[i] != NULL && a[i] < min){
//             min = a[i];
//         } 
//     }
    
//     return min;
// }

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int n = 5,k=0;
    int arr[n];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    int sumArr[10];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(j>=i){    
                if(i!=j){
                        sumArr[k] = arr[i] + arr[j];
                }else {
                    continue;
                }
                k++;
            }
        }
    }
    // for (int i = 0; i < k; i++)
    // {
    //     cout << i + 1 << " : " << sumArr[i] << endl;
    // }
    

    int min = sumArr[1];
    for (int i = 0; i < 10; i++)
    {
        if(sumArr[i] < min){
            min = sumArr[i];
        } 
    }

    int max = sumArr[1];
    for (int i = 0; i < 10; i++)
    {
        if(sumArr[i] > max){
            max = sumArr[i];
        } 
    }
    
    
    cout << min << " " << max;

    return 0;
}