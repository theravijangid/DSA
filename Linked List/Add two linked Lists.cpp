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

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<< temp->data <<" ";
        temp = temp->next;
    }
}

Node* reverse(Node* &head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = head->next;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}


Node* solve(Node* &head1, Node* &head2) {
    if(head1 == NULL) {
        return head2;
    }
    if( head2 == NULL) {
        return head1;
    }
    // step 1  : reverse both LL
    head1 = reverse(head1);
    head2 = reverse(head2);

    // step 2 : Add both LL
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(head1 != NULL && head2 != NULL) {
        // calculate sum
        int sum = carry + head1->data + head2->data;
        // find digit to create node for
        int digit = sum % 10;
        // calculate carry
        carry = sum / 10;
        Node* newNode = new Node(digit);

        if(ansHead == NULL) {
            ansHead = newNode;
            ansTail = newNode;
        }
        else {
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    while (head1 != NULL) 
    {
        int sum = carry + head1->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head1 = head1->next;
    }

    while (head2 != NULL) 
    {   
        
        int sum = carry + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head2 = head2->next;
    }

    while(carry != 0) {
        int sum = carry ;
        int digit = sum % 10;
        carry = sum / 10;
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }

    // step 3 : reverse ans
    ansHead = reverse(ansHead);
    // cout<<"ans: ";
    return ansHead;
}

int main() {
    Node* head1 = new Node(2);
    Node* second = new Node(4);
    head1->next = second;

    Node* head2 = new Node(2);
    Node* second2 = new Node(0);
    Node* third = new Node(4); 

    head2->next = second2;
    second2->next = third;


    Node* ans = solve(head1, head2);

    print(ans);
    return 0;
}