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

int length(node* &head) {
    int l = 0;
    node* temp = head;
    while(temp!=NULL) {
        l++;
        temp = temp->next;
    }
    return l;
}

int intersection(node* &head1, node* &head2) {
    int h1 = length(head1);
    int h2 = length(head2);
    int d = 0;
    node* ptr1;
    node* ptr2;
    if(h1>h2) {
        d = h1-h2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else {
        d = h2-h1;
        ptr1 = head2;
        ptr2 = head1;
    }
    
    while(d) {
        ptr1 = ptr1->next;
        if(ptr1==NULL) {
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL) {
        if(ptr1 == ptr2) {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

void insertattail(node* &head, int val) {
    node* n = new node(val);
    if(head==NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* &head) {
    node* temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
    node* head1 = NULL;
    insertattail(head1, 1);
    insertattail(head1, 2);
    insertattail(head1, 3);
    insertattail(head1, 4);
    insertattail(head1, 5);
    insertattail(head1, 6);
    node* head2 = NULL;
    insertattail(head2, 3);
    insertattail(head2, 4);

    // Intersection function
    node* temp1 = head1;
    while(temp1->data!=5) {
        temp1 = temp1->next;
    }
    node* temp2 = head2;
    while(temp2->next!=NULL) {
        temp2 = temp2->next;
    }
    temp2->next = temp1;

    display(head1);
    display(head2);
    cout<<intersection(head1, head2)<<endl;

    return 0;
}