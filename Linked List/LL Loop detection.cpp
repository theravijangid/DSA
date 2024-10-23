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

bool loopDetection(Node* &head) {
    if(head == NULL) {
        cout<<"LL is empty";
        return false;
    }

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast) {
            // loop is present
            return true;
        }
    }
    // loop absent
    return false;
}

// starting point of a loop
Node* startPoint(Node* &head) {
    if(head == NULL) {
        cout<<"LL is empty";
        return NULL;
    }

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast) {
            slow = head;
            break;
        }
    }

    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    // now return anything fast/ slow
    return slow;
}


// remove the loop
void removeLoop(Node* &head) {
    if(head == NULL) {
        cout<<"LL is empty";
        return;
    }

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast) {
            slow = head;
            break;
        }
    }

    Node* prev = fast;
    while(slow != fast) {
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;
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
    Node* seven = new Node(70);
    Node* eigth = new Node(80);
    Node* ninth = new Node(90); 

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = seven;
    seven->next = eigth;
    eigth->next = ninth;
    ninth->next = third;

    cout<<"Is loop present : " << loopDetection(head) << endl;
    cout<<"Starting point of loop is : "<< startPoint(head) ->data << endl;
    removeLoop(head);
    print(head); 
    cout<< endl;
    cout<<"Is loop present : " << loopDetection(head) << endl;
    return 0;
}