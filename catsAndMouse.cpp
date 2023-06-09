#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;

string winner(int n,int m){
    if (n < m ){
        return "Cat A";
    }else if (m < n){
        return "Cat B";
    }else{
        return "Mouse C";
    }
}

int main()
{
    // input
    int t;
    cin >> t;
    string whoWon[t];
    for (int i = 0; i < t; i++){
        int arr[3];
        for (int i = 0; i < 3; i++){
            cin >> arr[i];
        }
        int distanceA = abs(arr[0] - arr[2]);
        int distanceB = abs(arr[1] - arr[2]);
        whoWon[i] = winner(distanceA,distanceB);
    }

    for (int i = 0; i < t; i++){
        cout << whoWon[i] << endl;
    }
    
    return 0;
}