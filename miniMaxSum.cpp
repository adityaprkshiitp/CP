#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int n = 5;
    long int arr[n];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    long int a = arr[0] + arr[1] + arr[2] + arr[3];
    long int b = arr[1] + arr[2] + arr[3] + arr[4];
    long int c = arr[2] + arr[3] + arr[4] + arr[0];
    long int d = arr[3] + arr[4] + arr[0] + arr[1];
    long int e = arr[4] + arr[0] + arr[1] + arr[2];

    long int sumArr[5] = {a,b,c,d,e};
    long int min = sumArr[0];
    for (int i = 0; i < 5; i++)
    {
        if(sumArr[i] < min){
            min = sumArr[i];
        } 
    }

    long int max = sumArr[0];
    for (int i = 0; i < 5; i++)
    {
        if(sumArr[i] > max){
            max = sumArr[i];
        } 
    }
    // for (int i = 0; i < 5; i++){
    //     cout << i + 1 << " : " << sumArr[i] << endl;
    // }
    
    cout << min << " " << max;

    return 0;
}