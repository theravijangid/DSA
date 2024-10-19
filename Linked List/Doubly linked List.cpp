#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        cout<< "Deleted data value is: "<< this->data << endl;
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
    head->prev = newNode;
    head = newNode;
}

void insertATTail(Node* &head, Node* &tail, int data) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;   
}

int getLength(Node* &head) {
    Node* temp = head;
    int i = 0;
    while(temp != NULL) {
        temp = temp->next;
        i++; 
    }
    return i;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
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
    int len = getLength(head);
    if(position > len) {
        insertATTail(head, tail, data);
        return;
    }
    Node* prev = head;
    int i = 1;
    while(i < position - 1) {
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    Node* newNode = new Node(data);
    
    prev->next = newNode;
    newNode->prev = prev;
    newNode->next = curr;
    curr->prev = newNode;
}

void deleteFromPos(Node* &head, Node* &tail, int position) {
    if(head == NULL) {
        cout << "Linked List is empty" ;
        return;
    }
    if(head->next == NULL) {
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    
    if(position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
        return;
    }

    int len = getLength(head);
    if(position > len || position < 1) {
        cout<< "Please enter a valid position";
        return;
    }
    if(len == position) {
        Node* temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    } 

    // curr, prev
    Node* left = head;
    int i = 1;
    if(i < position - 1) {
        left = left->next;
        i++;
    }
    Node* curr = left->next;
    Node* right = curr->next;
    
    left->next = right;
    right->prev = left;
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<< temp->data <<" ";
        temp = temp->next;
    }
} 


int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    Node* head = first;
    Node* tail = fourth;

    print(head);
    cout  << endl;

    // cout<<"Inserting data at head";
    // insertAtHead(head, tail, 5);
    // cout << endl;
    // print(head);
    // cout << endl;


    // cout<<"Inserting data at Tail";
    // insertATTail(head, tail, 50);
    // cout << endl;
    // cout <<"Head: "<< head->data << endl;
    // cout <<"Tail: " <<tail->data << endl;
    // print(head);
    // cout << endl;


    // cout<<"Inserting data at Specific Position";
    // insertAtPosition(head, tail, 25, 1);
    // cout << endl;
    // cout <<"Head: "<< head->data << endl;
    // cout <<"Tail: " <<tail->data << endl;
    // print(head);
    // cout << endl;


    cout<<"Deleteing data at Specific Position "<< endl;
    deleteFromPos(head, tail, 5);
    cout << endl;
    // cout <<"Head: "<< head->data << endl;
    // cout <<"Tail: " <<tail->data << endl;
    print(head);
    cout << endl;

    return 0;
}