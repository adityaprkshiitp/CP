#include <bits/stdc++.h>
using namespace std;
#define ll long long

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
// void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
// void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
 
template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif
bool sec(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second);
}


int minPosBehind(vector<int> vec,int n, int k, int maximum){
    int min_B = maximum;
    int min_pos;

    for (int i = n-1; i >= k; i--)
    {
        if(vec[i] < min_B){
            min_B = vec[i];
            min_pos = i;
        }
    }
    
    return min_pos;
}
int maxPartitions(vector<int> vec, int n)
{
    int ans = 0;
    int minimum = 0;
    int maximum = *max_element(vec.begin(),vec.end());
    int min_pos = 0;
    int max_1;
    int min_1;
    for (int i = 0; i < n ; ++i) {
 
        // find minimum in whole vec
        minimum = *min_element(vec.begin() + i,vec.end());
        if(vec[i] == minimum){
            ans++;
            printf("%d\n",i);
            continue;
        }
        min_pos = minPosBehind(vec,n,i,maximum);
        max_1 = *max_element(vec.begin() + i,vec.begin() + min_pos);
        if(vec[min_pos] >= max_1){
            ans++;
            i = min_pos;
        }
        printf("%d : %d\n",min_pos,vec[min_pos]);
        i = min_pos;
    }
    debug(vec);
    // int maximum_pos = distance(vec.begin(),max_element(vec.begin(),vec.end()));
    // // printf("%d\n", maximum_pos);
    // if(maximum_pos == n - 1){
    //     ans++;
    // }
    if(ans){
        return ans;
    }else{
        return 1;
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // input
    int n; scanf("%d",&n);
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d",&temp);
        vec.push_back(temp);
    }
    printf("%d",maxPartitions(vec,n));
    cerr<<"aditya" << endl;
    
    return 0;
    
}