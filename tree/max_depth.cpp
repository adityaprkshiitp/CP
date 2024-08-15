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

// return depth
int maxDepth(Node* root){
    if(root == NULL){return 0;}
    int l = maxDepth(root->left);
    int h = maxDepth(root->right);

    return 1 + max(l,h);
}

// return if the tree is balanced or not
int dfsDepth(Node* root){
    if(root == NULL){return 0;}

    int l = dfsDepth(root->left);
    if(l==-1){return -1;}
    int h = dfsDepth(root->right);
    if(h==-1){return -1;}

    if(abs(l-h) > 1){return -1;}
    return 1 + max(l,h);
}
bool isBalanced(Node* root){
    return (dfsDepth(root)!=-1);
}

// return max diameter
int findmaxD(Node* root, int &maxi){
    if(root == NULL){return 0;}
    int l = findmaxD(root->left,maxi);
    int h = findmaxD(root->right,maxi);

    maxi = max(maxi,l+h);

    return 1 + max(l,h);
}
int findDia(Node* root){
    int maxi = 0;
    findmaxD(root,maxi);
    return maxi+1;
}

// return max sum
int maxSum(Node* root, int &maxi){
    if(root == NULL){return 0;}
    int l = maxSum(root->left,maxi);
    int h = maxSum(root->right,maxi);

    maxi = max(maxi,l+h);

    return root->data + max(l,h);
}
int maxPathSum(Node* root){
    int maxi = 0;
    maxSum(root,maxi);
    return maxi;
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
    
    // print depth
    int depth = maxDepth(root);
    cout << "depth : " << depth << endl;

    // print ifBalanced or not
    if(isBalanced(root)){
        cout << "Yes" << endl;
    }else{cout << "No" << endl;}
    
    // max diameter
    int maxD = findDia(root);
    cout << maxD << endl;

    int maxSum = maxPathSum(root);
    cout << maxSum << endl;
    return 0;
}