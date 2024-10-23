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

Node* getMiddle(Node* &head) {
    if(head == NULL) {
        cout<< "LL is empty";
        return head;
    }

    if(head->next == NULL) {
        return head;
    }
    
    Node* slow = head;

    // Node* fast = head;
    Node* fast = head->next;    // for middle in even case if we want the middle in left side

    while(slow != NULL && fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
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

    
    cout<<"Middle element is: "<< getMiddle(head) ->data  << endl;

    return 0;
}