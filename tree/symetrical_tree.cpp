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

bool isSymHelp(Node* left, Node* right){
    if(left == NULL || right == NULL){
        return left == right;
    }
    if(left->data != right->data) return false;
    return isSymHelp(left->left,right->right) && isSymHelp(left->right, right->left);
}
bool isSym(Node* root){
    return root == NULL || isSymHelp(root->left,root->right);
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
    cout << isSym(root);


}