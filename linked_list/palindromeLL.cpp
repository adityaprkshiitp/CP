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
    Node* temp = head;
    while(temp){
        cout << temp->data << ", ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* newHead = reverse(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

Node* mid(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!= NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

bool ifPalindrome(Node* head, Node* newHead){
    Node* t1 = head;
    Node* reversed = reverse(newHead);
    printLL(reversed);
    Node* t2 = reversed;
    while(t1 != newHead){
        if(t1->data != t2->data){
            return false;
        }
        t1 = t1->next;
        t2 = t2->next;
    }
    return true;
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
        // Node* newHead = reverse(head);
        Node* newHead = mid(head);
        bool check = ifPalindrome(head,newHead);
        cout << check << endl;

    }
    return 0;   
}