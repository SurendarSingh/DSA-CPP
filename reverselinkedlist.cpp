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

node* reverselinkedlist(node* &head) {
    node* previousnode = NULL;
    node* currentnode = head;
    node* nextnode;
    while(currentnode!=NULL) {
        nextnode = currentnode->next;
        currentnode->next = previousnode;

        previousnode = currentnode;
        currentnode = nextnode;
    }
    return previousnode;
}

node* reversellrecursive(node* &head) {
    if(head==NULL || head->next==NULL) {
        return head;
    }
    
    node* newhead = reversellrecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

void display(node* head) {
    node* temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    node* newhead = reverselinkedlist(head);
    display(newhead);
    node* (rechead) = reversellrecursive(newhead);
    display(rechead);
    return 0;
}