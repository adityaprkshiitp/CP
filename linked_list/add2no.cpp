#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* converttoLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
    
}

void printLL(Node* head){
    Node* temp = head->next;
    while(temp){
        cout << temp->data << ", ";
        temp = temp->next;
    }
    cout << endl;
}

Node* add2(Node* head1, Node* head2){
    Node* t1 = head1;
    Node* t2 = head2;
    Node* dummyNode = new Node(-1);
    Node* curr = dummyNode;
    int carry = 0;
    while(t1 != NULL || t2 != NULL){
        int sum = carry;
        if(t1) sum += t1->data;
        if(t2) sum += t2->data;
        Node* newNode = new Node(sum%10);
        carry = sum / 10;

        curr->next = newNode;
        curr = curr->next;

        if(t1) t1 = t1->next;
        if(t2) t2 = t2->next;
    }
    if(carry){
        Node* newNode = new Node(carry);
        curr->next = newNode;
    }

    return dummyNode->next;
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
        vector<int> arr(n),arr2(m);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for (int i = 0; i < m; i++){
            cin >> arr2[i];
        }
        Node* head1 = converttoLL(arr);
        Node* head2 = converttoLL(arr2);
        Node* res = add2(head1,head2);
        printLL(res);

    }
    return 0;   
}