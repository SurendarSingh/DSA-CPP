#include<iostream>

using namespace std;

class node {
    public:
    int data;
    node* next;
    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    if(head == NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head) {
    node* temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool detectCycle(node* &head) {
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head) {
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            fast = head;
            while(slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
            slow->next = NULL;
            return;
        }
    }
}

int main() {
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    head->next->next->next->next = head->next;
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    display(head);
    return 0;
}