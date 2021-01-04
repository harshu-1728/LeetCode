// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;

    Node* head = new Node(val);
    Node* tail = head;

    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* addTwoLists(struct Node* first, struct Node* second);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;

        cin>>n;
        Node* first = buildList(n);

        cin>>m;
        Node* second = buildList(m);

        Node* res = addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
typedef struct Node node_t;
struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    node_t *m1, *m2, *head1, *head2;
    m1 = first;
    m2 = second;
    head1 = m1 = first;
    m2 = first->next;
    while (m1 && m2){
        m1->next = m2->next;
        m2->next = head1;
        head1 = m2;
        m2 = m1->next;
    }
    head2 = m1 = second;
    m2 = second->next;
    while (m1 && m2){
        m1->next = m2->next;
        m2->next = head2;
        head2 = m2;
        m2 = m1->next;
    }
    int t1, t2, t3, carry;
    carry = 0;
    node_t *head = (node_t*)malloc(sizeof(node_t));
    node_t *curr = head;
    node_t *prev;
    while (head1 || head2){
        t1 = t2 = 0;
        if (head1){
            t1 = head1->data;
            head1 = head1->next;
        }
        if (head2){
            t2 = head2->data;
            head2 = head2->next;
        }
        t3 = t1+t2+carry;
        carry = t3/10;
        t3 = t3%10;
        curr->data = t3;
        curr->next = (node_t*)malloc(sizeof(node_t));
        prev = curr;
        curr = curr->next;
    }
    if (carry > 0){
        curr->data = carry;
        curr->next = NULL;
    }
    else{
        prev->next = NULL;
        // curr = NULL;
        free(curr);
    }
    head1 = m1 = head;
    m2 = head->next;
    while (m1 && m2){
        m1->next = m2->next;
        m2->next = head1;
        head1 = m2;
        m2 = m1->next;
    }
    return head1;
}