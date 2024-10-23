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

int getLength(Node* &head) {
    int i=0;
    Node* temp = head;
    while(temp != NULL) {
        temp = temp->next;
        i++;
    }
    return i;
}

Node* reverse(Node* &head, int k) {
    if(head == NULL) {
        cout<< "LL is empty";
        return NULL;
    }
    
    int len = getLength(head);
    if(len < k) {
        return head;
    }

    // step A
    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr->next;
    int count = 0;

    while(count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Step B: recursive call
    if(next != NULL) {
        // We still have nodes to reverse
        head->next = reverse(curr, k);
    }

    // step c
    return prev;

}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<< temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30); 
    Node* fourth = new Node(40); 
    Node* fifth = new Node(50); 
    Node* six = new Node(60); 

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;

    print(head);
    cout<< endl;

    head = reverse(head, 6);

    print(head);

    return 0;
}