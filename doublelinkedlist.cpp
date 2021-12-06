#include<iostream>

using namespace std;

class node {
    public:
    int data;
    node* next;
    node* prev;
    node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    if(head!=NULL) {
        head->prev = n;
    }
    head = n;
} 

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    if(head == NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL) {
        temp = temp->next;
    }
    n->prev = temp;
    temp->next = n;
}

void deleteNode(node* &head, int val) {
    node* temp = head;
    while(temp!=NULL) {
        if(temp->data == val) {
            if(temp->next!=NULL) {
                temp->next->prev = temp->prev;
            }
            if(temp->prev!=NULL) {
                temp->prev->next = temp->next;
            }
            else {
                head = temp->next;
            }
            delete temp;
            return;
        }
        temp = temp->next;
    }
    cout<<"That node is not present"<<endl;
}

void display(node* head) {
    node* temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtHead(head, 5);
    display(head);
    deleteNode(head, 2);
    display(head);
    return 0;
}