#include <iostream>
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

void insetAtTail(node* &head, int val) {
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

node* merge_2_ll(node* &head1, node* &head2) {
    node* ps = new node(-1);
    node* p = ps;
    node* p1 = head1;
    node* p2 = head2;
    while(p1!=NULL && p2!=NULL) {
        if(p1->data<p2->data) {
            p->next = p1;
            p = p->next;
            p1 = p1->next;
        }
        else {
            p->next = p2;
            p = p->next;
            p2 = p2->next;
        }
    }
    while(p1!=NULL) {
        p->next = p1;
        p = p->next;
        p1 = p1->next;
    }
    while(p2!=NULL) {
        p->next = p2;
        p = p->next;
        p2 = p2->next;
    }
    return ps->next;
}

int main() {
    node* head1 = NULL;
    insetAtTail(head1, 1);
    insetAtTail(head1, 3);
    insetAtTail(head1, 5);
    insetAtTail(head1, 6);
    node* head2 = NULL;
    insetAtTail(head2, 2);
    insetAtTail(head2, 4);
    insetAtTail(head2, 7);
    display(head1);
    display(head2);
    node* head = merge_2_ll(head1, head2);
    display(head);
    return 0;
}