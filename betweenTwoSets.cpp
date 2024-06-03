#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;

int gcd(int a, int b)
{
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}
int gdd(int a, int b)
{
  if (a == 0)
    return b;
  return gdd(b % a, a);
}

int findHCF(ll arr[], int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gdd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}

ll findLCM(ll arr[],int n){
    int ans = arr[0];
    for (int i = 1; i < n; i++){
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
    }

    return ans;
}
int betweenTwoSets(ll arr[],ll arr1[],int n,int m){

    // LCM
    ll LCM = findLCM(arr,n);

    // HCF
    ll HCF = findHCF(arr1,m);

    // cout << "LCM : " << LCM << endl;
    // cout << "HCF : " << HCF << endl;
    int static result = 0;
    int count = 0;
    while( count < HCF){
        count += LCM;
        // cout << "count : " << count << " ";
        if(HCF % count == 0){
            result++;
        }
    }
    return result;
}

int main()
{
    // input
    int n,m;
    cin >> n >> m;
    ll arr[n],arr1[m];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++){
        cin >> arr1[i];
    }
    int final = betweenTwoSets(arr,arr1,n,m);
    cout << final;
    return 0;
}