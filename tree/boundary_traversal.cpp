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

bool isLeaf(Node* cur){
    if(cur->left == NULL && cur->right == NULL){
        return true;
    }else{return false;}
}

void addLeftBoundary(Node* root, vector<int> &res){
    Node* cur = root->left;
    while (cur){
        if(!isLeaf(cur)) res.push_back(cur->data);
        if(cur->left){ cur = cur->left; }
        else { cur = cur->right;}
    }
}

void addRightBoundary(Node* root, vector<int> &res){
    Node* cur = root->right;
    vector<int> tmp;
    while (cur){
        if(!isLeaf(cur)) {tmp.push_back(cur->data);}
        if(cur->right) { cur = cur->right;}
        else { cur = cur->left;}
    }
    for (int i = tmp.size() - 1; i >= 0; i--){
        res.push_back(tmp[i]);
    }
}

void addLeaves(Node* root, vector<int> &res){
    if(isLeaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left) {addLeaves(root->left,res);}
    if(root->right) {addLeaves(root->right,res);}
}

vector<int> printBoundary(Node* root){
    vector<int> res;
    if(!root) {return res;}
    if(!isLeaf(root)) {res.push_back(root->data);}
    addLeftBoundary(root,res);
    addLeaves(root,res);
    addRightBoundary(root,res);
    return res;
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
    vector<int> res = printBoundary(root);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << ' ';
    }
    
    
    return 0;
}