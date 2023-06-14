#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int countTopic(string a,string b){
    int cnt = 0;
    for (int i = 0; i < a.size(); i++){
        if(a[i]=='1' || b[i] == '1'){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n; scanf("%d",&n);
    int m; scanf("%d",&m);
    string arr[n];
    for (int i = 0; i < n; i++){
        // arr[i] = (char*)malloc(m * sizeof(char));
        // scanf("%s",arr[i]); fuck this shit
        cin >> arr[i];
    }
    int maximum = 0;
    int final[n];
    int k = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            int total = countTopic(arr[i],arr[j]);
            maximum = max(maximum,total);
            final[k] = total;
            k++;
        }
    }
    int count = 0;
    for (int i = 0; i < k; i++)
    {
        if(final[i] == maximum){
            count++;
        }
    }
    printf("%d\n",maximum);
    printf("%d",count);
    
    return 0;
}
