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

node* reverseKnode(node* head, int k) {
    int count = 0;
    node* prevptr = NULL;
    node* currptr = head;
    node* nextprt;
    while(currptr!=NULL && count<k) {
        nextprt = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextprt;
        count++;
    }
    if(currptr!=NULL) {
        head->next = reverseKnode(currptr, k);
    }
    return prevptr;
}

int main() {
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    node* newhead = reverseKnode(head, 2);
    display(newhead);
    return 0;
}