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

// preorder travesal
void pre(Node* root,vector<int>& s){
    if(root==NULL)
    return;  
    s.push_back(root->data);
    pre(root->left,s);
    pre(root->right,s);
}
vector <int> preorder(Node* root){
    vector<int> s;
    pre(root,s);
    return s;
}

// postorder travesal
void post(Node* root,vector<int>& s){
    if(root==NULL)
    return;  
    post(root->left,s);
    post(root->right,s);
    s.push_back(root->data);
}
vector <int> postorder(Node* root){
    vector<int> s;
    post(root,s);
    return s;
}

// inorder traversal
void in(Node* root,vector<int>& s){
    if(root==NULL)
    return;  
    in(root->left,s);
    s.push_back(root->data);
    in(root->right,s);
}
vector <int> inorder(Node* root){
    vector<int> s;
    in(root,s);
    return s;
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
    cout << "pre : ";
    vector<int> res1 = preorder(root);
    for (int i = 0; i < res1.size(); i++)
    {
        cout << res1[i] << ' ';
    }cout << endl;

    // print post
    cout << "post : ";
    vector<int> res2 = postorder(root);
    for (int i = 0; i < res2.size(); i++)
    {
        cout << res2[i] << ' ';
    }cout << endl;

    // print in
    cout << "in : ";
    vector<int> res3 = inorder(root);
    for (int i = 0; i < res3.size(); i++)
    {
        cout << res3[i] << ' ';
    }cout << endl;
    


}