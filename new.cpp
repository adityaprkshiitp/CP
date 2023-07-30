#include <bits/stdc++.h>
using namespace std;

string hackerrankInString(string s) {
    int s_size = s.size();
    char h = 'h'; char a = 'a'; char c = 'c'; char k = 'k'; char e = 'e';
    char r = 'r'; char n = 'n';
    size_t a1 = s.find(h);
    size_t b1 = s.find(a,a1+1);
    size_t c1 = s.find(c,b1+1);
    size_t d1 = s.find(k,c1+1);
    size_t e1 = s.find(e,d1+1);
    size_t f1 = s.find(r,e1+1);
    size_t g1 = s.find(r,f1+1);
    size_t h1 = s.find(a,g1+1);
    size_t i1 = s.find(n,h1+1);
    size_t j1 = s.find(k,i1+1);
    size_t arr[10] = {a1,b1,c1,d1,e1,f1,g1,h1,i1,j1};
    // size_t brr[10] = {a1,b1,c1,d1,e1,f1,g1,h1,i1,j1};
    // vector<size_t> vec;
    
    // sort(arr,arr+10);
    // int count = 0;
    // for (int i = 0; i < 10; i++) {
    //     if(arr[i] == brr[i]){
    //         count++;
    //     }else{
    //         return "NO";
    //     }
    // }
    
    // return "YES";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    
    
    if(is_sorted(arr,arr+10)){
        return "YES";
    }else{
        return "NO";
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; scanf("%d",&t);
    while(t--){
        string s;
        cin >> s;
        string res = hackerrankInString(s);
        cout << res << endl;
        
    }
    

    

    return 0;
}
