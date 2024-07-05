#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* converttoDLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i],nullptr,mover);
        mover->next = temp;
        mover = temp;
    }
    return head;
    
}

void printDLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << ", ";
        temp = temp->next;
    }
    cout << endl;
}
Node* reverseDll(Node* head){
    if(head->next == NULL || head == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* temp = head;
    while(temp != NULL){
        prev = temp->back;
        temp->back = temp->next;
        temp->next = prev;
        temp = temp->back;
    }
    return prev->back;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        Node* head = converttoDLL(arr);
        printDLL(head);
        printDLL(reverseDll(head));

    }
    return 0;   
}