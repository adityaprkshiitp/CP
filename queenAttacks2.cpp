#include <bits/stdc++.h>
using namespace std;


int leftDia(int mid, int n){
    int moves = 0;
    if(mid <= n + 1){
        moves += mid - 2;
    }else{
        moves += 2*n - mid;
    }
    return moves;
}

int rightDiaUp(int x, int y, int n){
    int moves = 0;
    while(x < n && y < n){
        x++;
        y++;
        moves++;
    }
    
    return moves;
}

int rightDiaDown(int x, int y, int n){
    int moves = 0;
    while(x > 1 && y > 1){
        x--;
        y--;
        moves++;
    }
    
    return moves;
}



int main(int argc, char const *argv[])
{
    int n; scanf("%d",&n);
    int k; scanf("%d",&k);
    // int queen_x, queen_y;
    pair<int,int> queen_pos;
    scanf("%d %d",&queen_pos.first,&queen_pos.second);
    int x = queen_pos.first;
    int y = queen_pos.second;
    int mid = x + y;
    int max_moves;
    max_moves = (2*n - 2) + leftDia(mid,n) + rightDiaUp(x,y,n) + rightDiaDown(x,y,n);

    
    vector<pair<int,int>> vec;
    for (int i = 0; i < k; i++)
    {
        pair<int,int> temp;
        scanf("%d %d",&temp.first,&temp.second);
        vec.push_back(temp);
    }
    int v_moves1 = 0;
    int v_moves2 = 0;
    int h_moves1 = 0;
    int h_moves2 = 0;
    int rd_moves = 0;
    int ru_moves = 0;
    int ld_moves = 0;
    int lu_moves = 0;
    for (int i = 0; i < k; i++)
    {
        if(vec[i].first == x){
            if(vec[i].second <= y){
                v_moves1 = max(v_moves1, vec[i].second);
            }else{
                v_moves2 = max(v_moves2, n+1-vec[i].second);
            }
        }
        if(vec[i].second == y){
            if(vec[i].first <= x){
                h_moves1 = max(h_moves1, vec[i].first);
            }else{
                h_moves2 = max(h_moves2, n+1-vec[i].first);
            }
        }
        if((mid - vec[i].first - vec[i].second)%2 == 0){
            if(vec[i].first < x && vec[i].second < y){
                rd_moves = max(rd_moves, (vec[i].first + vec[i].second)/2 );
            }else{
                ru_moves = max(ru_moves, min(n-vec[i].first + 1,n-vec[i].second + 1));
            }
        }
        if(mid == vec[i].first + vec[i].second){
            if(y < vec[i].first){
                ld_moves = max(ld_moves, vec[i].second);
            }else{
                lu_moves = max(lu_moves, vec[i].first);
            }
        }

    }

    // tests
    printf("max moves before : %d\n",max_moves);
    max_moves = max_moves - v_moves1 - v_moves2 - h_moves1 - h_moves2 - rd_moves - ru_moves - lu_moves - ld_moves;
    cout << "max_moves after : " << max_moves << endl;
    cout << "v_moves1 : " << v_moves1 << endl;
    cout << "v_moves2 : " << v_moves2 << endl;
    cout << "h_moves1 : " << h_moves1 << endl;
    cout << "h_moves2 : " << h_moves2 << endl;
    cout << "rd_moves : " << rd_moves << endl;
    cout << "ru_moves : " << ru_moves << endl;
    cout << "ld_moves : " << ld_moves << endl;
    cout << "lu_moves : " << lu_moves << endl;


    // max_moves = max_moves - v_moves1 - v_moves2 - h_moves1 - h_moves2 - rd_moves - ru_moves - ld_moves - lu_moves;
    // cout << max_moves;

    return 0;
}
