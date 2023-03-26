#include <bits/stdc++.h> 
/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

void insert(Node * ( & head), int n, int pos, int val) {
    // Write your code here
    if (head == NULL) {
    return;}
    if (pos == 0) {
    Node* nenode= new Node(val);
    nenode->next=head;
    head=nenode;
    } else if (pos == 1) {
        Node* newnode=new Node(val);
        Node* temp=head->next;
        head->next=newnode;
        newnode->next=temp;
    } else {
    insert(head->next,  n-1, pos-1,  val);}
}
