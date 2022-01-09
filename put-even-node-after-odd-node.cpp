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

void evenafterodd(node* &head) {
    if(head->next == NULL) {
        return;
    }
    node* evenhead = head->next;
    node* odd = head;
    node* even = evenhead;
    while(even->next != NULL && odd->next != NULL) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        if(even->next != NULL) {
            even = even->next;
        }
    }
    odd->next = evenhead;
}

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

int main() {
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    evenafterodd(head);
    display(head);
    return 0;
}