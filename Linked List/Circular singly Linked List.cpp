#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        cout<<"Deleted node data is : " << this->data<< endl;
    }
};


void insertAtHead(Node* &head, Node* &tail, int data) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return; 
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    tail->next = newNode;
}

int getLength(Node* &head) {
    int i = 0;
    Node* temp = head;
    while(true) {
        if(temp->next == head) {
            i++;
            return i;
        }
        temp = temp->next;
        i++;
    }
}

void insertAtPosition(int position, int data, Node* &head, Node* &tail) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return; 
    }

    if(position == 1) {
        insertAtHead(head, tail, data);
        return;
    }

    // int len = getLength(head);
    // if(position + 1 > len) {
    //        cout<< "Please enter a valid position" << endl;
    // }

    // curr, prev
    int i=1;
    Node* prev = head;
    while(i < position - 1) {
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    Node* newNode = new Node(data);
    newNode->next = curr;
    prev->next = newNode;
}

void print(Node* &head) {
    Node* temp = head;
    while(true) {
        if(temp->next == head) {
            cout<< temp->data <<" ";
            return;
        }
        cout<< temp->data <<" ";
        temp = temp->next;
    }
}

// void print(Node* &head) {
//     Node* temp = head;
//     while(temp != NULL) {
//         cout<< temp->data <<" ";
//         temp = temp->next;
//     }
// } 

int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = first;

    Node* head = first;
    
    print(head);
    cout<< endl;
    cout<< endl;

    // insertAtHead(head, fourth, 50);
    insertAtPosition(5, 50, head, fourth);

    cout<< endl;
    print(head);
    
    return 0; 
}