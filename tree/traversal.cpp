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

void printTree(vector<int> nodeArray) {
	int n = nodeArray.size();
	for (int i = 0; i < n; i++) {
		cout << nodeArray[i] << " ";
	}
	cout << endl;
}

// all traversal
void preInPostTraversal(Node* root){
    stack<pair<Node*,int>> st;
    st.push({root,1});
    vector<int> pre, in, post;
    if(root == NULL){return;}
    while(!st.empty()){
        auto it = st.top();
        st.pop();
        if(it.second == 1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left){st.push({it.first->left,1});}
        }else if(it.second == 2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right){st.push({it.first->right,1});}
        }else{
            post.push_back(it.first->data);
        }
    }

    printTree(pre);
    printTree(in);
    printTree(post);
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
    preInPostTraversal(root);
    
    return 0;

}