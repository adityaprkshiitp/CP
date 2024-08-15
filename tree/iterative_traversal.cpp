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
vector<int> preorder(Node* root){
    stack<Node*> s1;
    vector<int> res;
    if(root==NULL){return res;} 
    s1.push(root);
    while (!s1.empty()){
        root = s1.top();
        s1.pop();
        res.push_back(root->data);
        if(root->right){s1.push(root->right);}
        if(root->left){s1.push(root->left);}
    }

    return res;
}

// dosent fking work
// postorder travesal
vector<int> postorder(Node* root){
    stack<Node*> s1;
    Node* node = root;
    vector<int> res;
    while (!s1.empty() && node != NULL){
        if ( node != NULL){
            s1.push(node);
            node = node->left;
        }else{
            Node* temp = s1.top()->right;
            if (temp == NULL){
                temp = s1.top();
                s1.pop();
                res.push_back(temp->data);
                while (!s1.empty() && temp == s1.top()->right){
                    temp = s1.top();
                    s1.pop();
                    res.push_back(temp->data);
                }
            }else{
                node = temp;
            }
        }
    }
    return res;
}

// inorder traversal
vector<int> inorder(Node* root){
    stack<Node*> s1;
    Node* node = root;
    vector<int> res;
    while (true){
        if (node != NULL){
            s1.push(node);
            node = node->left;
        }
        else{
            if(s1.empty()){break;}
            node = s1.top();
            s1.pop();
            res.push_back(node->data);
            node = node->right;
        }
        
    }

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