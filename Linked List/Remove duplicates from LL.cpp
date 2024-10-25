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

void removeDuplicates(Node* &head) {
    if(head == NULL) {
        cout<<"LL is empty";
        return;
    }

    Node* currentNode = head;

    while(currentNode != NULL) {
        if((currentNode->next != NULL) && (currentNode->data == currentNode->next->data)) {
            Node* temp = currentNode->next;
            currentNode->next = currentNode->next->next;
            // free delete node
            temp->next = NULL;
            delete temp;
        } 
        else {
            currentNode = currentNode->next;
        }
    }
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<< temp->data <<" ";
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30); 
    Node* fourth = new Node(30); 
    Node* fifth = new Node(30); 
    Node* six = new Node(30); 

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;

    print(head);
    cout<< endl;

    removeDuplicates(head);

    print(head);
    return 0;
}