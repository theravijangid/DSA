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
};


// I want to insert a node right at the head of LL
void insertAtHead(Node* &head, Node* &tail, int data) {
    // step 1 create a new node
    Node* newNode = new Node(data);
    // step 2 conect 
    newNode->next = head;
    // step 3 
    // first Node
    if(head == NULL) {
        tail = newNode;
    } 
    head = newNode;
}

// simpler way
// void insertAtHead(Node* &head, Node* &tail, int data) {
//     if(head == NULL) {
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     // step 1 create a new node
//     Node* newNode = new Node(data);
//     // step 2 conect 
//     newNode->next = head;
//     // step 3 
//     head = newNode;
// }


void insertAtTail(Node* &head, Node* &tail, int data) {
    // step 1 create a new node
    Node* newNode = new Node(data);
    // step 2 connect with tail node
    if(tail == NULL) {
        tail = newNode;
        head = newNode;
    }
    else {
        tail->next = newNode;
    }
    // step 3 update tail
    tail = newNode;
}

// simpler way
// void insertAtTail(Node* &head, Node* &tail, int data) {
//     if(head == NULL) {
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     // step 1 create a new node
//     Node* newNode = new Node(data);
//     // step 2 connect with tail node
//     tail->next = newNode;
//     // step 3 update tail
//     tail = newNode;
// }

int findLength(Node* &head) {
    Node* temp = head;
    int i=0;
    while(temp != NULL) {
        temp = temp->next;
        i++;
    }
    return i;
}

void inserAtPosition(int position, Node* &head, Node* &tail, int data) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    
    if(position == 0) {
        insertAtHead(head, tail, data);
        return;
    }

    int len = findLength(head);
    if(position >= len) {
        insertAtTail(head, tail, data);
        return;
    }
    
    // step 1 find the position: prev & curr
    int i = 1;
    Node* prev = head;
    while(i < position) {
        prev = prev->next;
        i++;
    }
    // Node* curr = prev->next;
    Node* newNode = new Node(data);
    // newNode->next = curr;
    newNode->next = prev->next;
    prev->next = newNode;

}

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL)
    {
        cout<< temp->data <<" ";
        temp = temp->next;
    }
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 90);
    insertAtTail(head, tail, 77);

    print(head);
    cout<< endl << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    inserAtPosition(5, head, tail, 101);
    cout<<"\nPrinting after insert at position cal\n";
    print(head);
    cout<< endl << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}

