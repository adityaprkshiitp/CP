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
    int n;
    cin >> n;
    double arr[n];
    double a =0,b=0,c=0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            a++;
        } else if(arr[i] == 0){
            b++;
        } else if(arr[i] > 0){
            c++;
        }
    }
    double negative = a/n;
    double zero = b/n;
    double positive = c/n;
        // cout << negative << endl;
        cout << fixed << setprecision(6) << positive << endl;
        cout << fixed << setprecision(6) << negative << endl;
        cout << fixed << setprecision(6) << zero << endl;


    return 0;
}