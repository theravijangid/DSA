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

void sort(Node* &head) {
    int zero = 0, one = 0, two = 0;
    
    Node* temp = head;

    while(temp != NULL) {
        if(temp->data == 0) {
            zero++;
        }
        else if (temp->data == 1) {
            one++;
        }
        else if(temp->data == 2) {
            two++;
        }
        temp = temp->next;
    }

    temp = head;
    while(zero--) {
        temp->data = 0;
        temp = temp->next;
    }
    while(one--) {
        temp->data = 1;
        temp = temp->next;
    }
    while(two--) {
        temp->data = 2;
        temp = temp->next;
    }
}

Node* sort2(Node* &head) {
    // create dummy nodes
    Node* zerohead = new Node(-1);
    Node* zeroTail = zerohead;
    
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    // traverse original LL
    Node* curr = head;
    while(curr != NULL) {

        if(curr->data == 0) {
            // takeout zero wali node ie isolate it
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // Append the zero node in zeroHead LL
            zeroTail->next = temp;
            zeroTail = temp; 
        }
        else if(curr->data == 1) {
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // Append the zero node in OneHead LL
            oneTail->next = temp;
            oneTail = temp;
        }
        else if(curr->data == 2) {
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // Append the zero node in OneHead LL
            twoTail->next = temp;
            twoTail = temp;
        }
    }

    // modify one wali list i.e remove duumy node
    Node* temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    // modify two wali list i.e remove duumy node
    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;

    // Join List
    if(oneHead != NULL) {
        zeroTail->next = oneHead;
        if(twoHead != NULL) {
            oneTail->next = twoHead;
        }
    }
    else {
        if(twoHead != NULL) {
            zeroTail->next = twoHead;
        }
    }

    // remove zero head dummy node
    temp = zerohead;
    zerohead = zerohead->next;
    temp->next = NULL;
    delete temp;

    return zerohead;
}

int main() {
    Node* head = new Node(1);
    Node* second = new Node(1);
    Node* third = new Node(2); 
    Node* fourth = new Node(1); 
    Node* fifth = new Node(2); 
    Node* six = new Node(0); 

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;

    print(head);
    cout<< endl;

    // using replacement
    // sort(head);

    // without replacement
    head = sort2(head);

    print(head);
    return 0;
}