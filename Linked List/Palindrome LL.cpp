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

bool checkPalindrome(Node* &head) {
    if(head == NULL) {
        cout<<"LL is empty";
        return true;
    }

    if(head->next == NULL) {
        return true;
    }

    // step A
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    
    Node* tempj = reverse(slow->next);

    Node* tempi = head;
  
    while(tempj != NULL) {
        // cout<< tempi->data<< " "<< tempj->data<< endl;
        if(tempi->data == tempj->data) {
            tempi = tempi->next;
            tempj = tempj->next;
        } 
        else {
            return false;
        }
    }
    return true; 
}

int main() {
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30); 
    Node* fourth = new Node(30); 
    Node* fifth = new Node(20); 
    Node* six = new Node(10); 

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;

    bool isPalindrome =  checkPalindrome(head);
    if(isPalindrome) {
        cout<<"LL is a palindrome"<< endl;
    }
    else {
        cout<<"LL is not a palindrome";
    }
    return 0;
}