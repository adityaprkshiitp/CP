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

vector<vector<int>> zigzagTraverse(Node* root){
    vector<vector<int>> result;
    if(root == NULL){
        return result;
    }
    queue<Node*> nodeQueue;
    nodeQueue.push(root);
    bool leftToRight = 1;

    while ( !nodeQueue.empty()){
        int size = nodeQueue.size();
        vector<int> row(size);
        for (int i = 0; i < size; i++){
            Node* node = nodeQueue.front();
            nodeQueue.pop();

            int index = (leftToRight) ? i : (size - 1 -i);

            row[index] = node->data;
            if(node->left){nodeQueue.push(node->left);}
            if(node->right){nodeQueue.push(node->right);}
        }
        leftToRight = !leftToRight;
        result.push_back(row);
        
    }
    
    return result;
}

vector<vector<int>> lvlOrder(Node* root){
    vector<vector<int>> result;
    if(root == NULL){
        return result;
    } 
    queue<Node*> nQueue;
    nQueue.push(root);
    while (!nQueue.empty()){
        int size = nQueue.size();
        vector<int> row;
        for (int i = 0; i < size; i++){
            Node* node = nQueue.front();
            nQueue.pop();
            if(node->left){nQueue.push(node->left);}
            if(node->right){nQueue.push(node->right);}
            row.push_back(node->data);
        }
        result.push_back(row);
    }
    return result;
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

    vector<vector<int>> res1 = zigzagTraverse(root);
    for (int i = 0; i < res1.size(); i++){
        for (int j = 0; j < res1[i].size(); j++){
            cout << res1[i][j] << ' ';
        }cout << endl;
    }

    vector<vector<int>> res2 = lvlOrder(root);
    for (int i = 0; i < res2.size(); i++){
        for (int j = 0; j < res2[i].size(); j++){
            cout << res2[i][j] << ' ';
        }cout << endl;
    }
    
    


}