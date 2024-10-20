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
        cout<< "Deleted data is : "<< this->data<< endl;
    }
};


Node* reverseUsingLoop(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL)
    {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* reverseUSingRE(Node* prev, Node* curr) {
    if(curr == NULL) {
        return prev;
    }

    Node* next = curr->next;
    curr->next = prev;

    // prev = curr;
    // curr = next;
    // RE
    return reverseUSingRE(curr, next);
    // return reverseUSingRE(prev, curr);
}

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<< temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* first = new Node(10);
    Node* second = new Node(2000);
    Node* third = new Node(30);
    Node* fourth = new Node(400);

    first->next = second;
    second->next = third;
    third->next = fourth;

    Node* head = first;
    cout<<"Before Reverse " << endl;
    print(head);

    Node* prev = NULL;
    Node* curr = head;
    // head =  reverseUsingLoop(head);
    head = reverseUSingRE(prev, curr);

    cout << endl <<endl;
    cout<<"After Reverse " << endl;
    print(head);
    return 0;    
}