#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* bottom;

    public:
    Node(int data1, Node* next1, Node* bottom1){
        data = data1;
        next = next1;
        bottom = bottom1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        bottom = nullptr;
    }
};

Node* converttoLL(vector<vector<int>>& arr){
    Node* head = new Node(arr[0][0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i][0]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << ", ";
        temp = temp->next;
    }
    cout << endl;
}

int lengthofLL(Node* head){
    int cnt = 0;
    Node* temp = head->next;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        vector<vector<int>> arr(n,vector<int>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; i < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        Node* head = converttoLL(arr);
        printLL(head);

    }
    return 0;   
}
