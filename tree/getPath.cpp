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

bool getPath(Node* root, vector<int> &arr, int x){
    if(!root){
        return false;
    }

    arr.push_back(root->data);
    if(root->data == x){
        return true;
    }
    if(getPath(root->left,arr,x) || getPath(root->right,arr,x)){
        return true;
    }
    arr.pop_back();
    return false;
}

vector<int> solution(Node* root,int x){
    vector<int> arr;
    if(root == NULL){
        return arr;
    }
    getPath(root,arr,x);
    return arr;
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

    int x; cin >> x;
    vector<int> res = solution(root,x);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << ' ';
    }
    

    


}