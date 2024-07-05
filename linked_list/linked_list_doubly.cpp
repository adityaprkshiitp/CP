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
    Node* temp = head->next;
    while(temp){
        cout << temp->data << ", ";
        temp = temp->next;
    }
    cout << endl;
}

int lengthofDLL(Node* head){
    int cnt = 0;
    Node* temp = head->next;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int searchIfPresent(Node* head, int val){
    Node* temp = head->next;
    while(temp){
        if(temp->data == val){return 1;}
        temp = temp->next;
    }
    return 0;
}

Node* deletek(Node* head, int k){
    if(head == NULL){
        // 0 size arr
        return NULL;
    }
    int cnt = 0;
    Node* kNode = head;
    while(kNode != NULL){
        cnt++;
        if(cnt == k) break;
        kNode = kNode->next;
        // to reach kth element
    }
    Node* prev = kNode->back;
    Node* front = kNode->next;
    if(prev == NULL && front == NULL){
        // for 1 size arr
        return NULL;
    }else if(prev == NULL){
        // remove head
        Node* temp = head;
        head = head->next;
        head->back = nullptr;
        temp->next = nullptr;
        free(temp);
        return head;
    }else if(front == NULL){
        // remove tail
        Node* temp = kNode;
        kNode = kNode->back;
        temp->back = nullptr;
        kNode->next = nullptr;
        free(temp);
        return head;
    }
    // delete kth element
    prev->next = front;
    front->back = prev;
    kNode->next = nullptr;
    kNode->back = nullptr;
    free(kNode);
    return head;
}

Node* insertKBefore(Node* head, int k, int el){
    if(head == NULL && k==1){
        return new Node(el);
    }
    if(k==1){
        Node* newNode = new Node(el,head,nullptr);
        head->back = newNode;
        return newNode;
    }
    int cnt = 0; Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(el,temp,prev);
    prev->next = newNode;
    temp->back = newNode;

    return head;
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
        cout << "Head - " << head->data << " ,Length of LL - " << lengthofDLL(head) << endl;
        cout << "D Linked list : ";printDLL(head);
        cout << searchIfPresent(head,2) << endl;
        Node* newHead = deletek(head,1);
        cout << "After deletion : ";
        printDLL(newHead);
        Node* newHead1 = insertKBefore(newHead,5,10);
        cout << "After insertion : ";
        printDLL(newHead1);

    }
    return 0;   
}