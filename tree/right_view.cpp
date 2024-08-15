#include<bits/stdc++.h>
using namespace std;

// Structure of a Binary Tree Node
struct Node {
    int data;
    struct Node *left, *right;
    Node(int v)
    {
        data = v;
        left = right = NULL;
    }
};

// right view travesal
void right(Node* root,int lvl, vector<int>& res){
    if(root==NULL) {return;}  
    if(lvl == res.size()){res.push_back(root->data);}
    
    right(root->right,lvl + 1,res);
    right(root->left,lvl + 1,res);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    // print pre
    cout << "right : ";
    vector<int> res;
    right(root,0,res);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << ' ';
    }
    


}