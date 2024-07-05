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

Node* rotateRight(Node* head, int k) {
    if(head == NULL || head->next == NULL || k==0){return head;}
    Node* temp = head;
    int len = 1;
    while(temp->next && ++len){
        temp = temp->next;
    }
    temp->next = head;
    k = k%len;
    k = len - k;
    while(k){
        temp = temp->next;
        k--;
    }
    head = temp->next;
    temp->next = NULL;
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
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        Node* head = converttoLL(arr);
        printLL(head);
        Node* newHead = rotateRight(head,3);
        printLL(newHead);

    }
    return 0;   
}
