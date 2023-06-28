#include <bits/stdc++.h>
using namespace std;

bool comp(const string &left, const string &right)
{
    // if length of both string are equals then sort
    // them in lexicographically order
    if (left.size() == right.size())
        return left < right;
 
    // Otherwise sort them according to the length
    // of string in ascending order
    else
        return left.size() < right.size();
}

int main(){

    int n; cin >> n;
    string v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v,v+n,comp);
    // string v1[n];
    // for (int i = 0; i < n; i++)
    // {
    //     if(v[i].size() <= v[i+1].size()){
    //         v1[i] = v[i];
    //     }else{
    //         v1[i] = v[i+1];
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }
    
    

    return 0;
}