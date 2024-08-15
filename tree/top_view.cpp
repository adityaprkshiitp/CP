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

vector<int> vertical(Node* root){
    vector<int> ans;
    if(root == NULL) return ans;
    map<int,int> mpp;
    queue<pair<Node* , int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        Node* node = it.first;
        int line = it.second;
        if(mpp.find(line) == mpp.end()) {mpp[line] = node->data;}
        if(node->left != NULL){
            q.push({node->left,line-1});
        }
        if(node->right != NULL){
            q.push({node->right, line + 1});
        }
    }
        for( auto it : mpp){
            ans.push_back(it.second);
        }
        return ans;
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

    // boundary
    vector<int> res = vertical(root);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << ' ';
    }
    
    
    return 0;
}