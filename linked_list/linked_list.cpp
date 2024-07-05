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

int lengthofLL(Node* head){
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
    if(k==0 || head == NULL){return head;}
    if(head->next == NULL){
        head = head->next;
        return head;
    }
    int cnt = 0; Node* temp = head;
    Node* prev = NULL;
    while (temp!=NULL){
        cnt++;
        if(cnt - 1 == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* insertk(Node* head, int k, int el){
    if(head == NULL && k==1){
        return new Node(el);
    }
    if(k==1){
        Node* new_head = new Node(el,head);
        return new_head;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            Node* x = new Node(el,temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
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
        Node* head = converttoLL(arr);
        cout << "Head - " << head->data << " ,Length of LL - " << lengthofLL(head) << endl;
        cout << "Linked list : ";printLL(head);
        cout << searchIfPresent(head,2) << endl;
        Node* newHead = deletek(head,1);
        cout << "After deletion : ";
        printLL(newHead);
        Node* newHead1 = insertk(newHead,5,10);
        cout << "After insertion : ";
        printLL(newHead1);

    }
    return 0;   
}