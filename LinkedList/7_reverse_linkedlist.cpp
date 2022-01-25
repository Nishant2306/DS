#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
Node *reverseITR(Node *head)
{
    Node *next = NULL;
    Node *current = head;
    Node *prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

Node *reverseREC1(Node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }
    Node *rest = reverseREC1(head->next);
    head->next->next = head;
    head -> next = NULL;
    return rest;
}
void reverseREC2(Node* curr, Node* prev, Node** head);
  
// This function mainly calls reverseUtil()
// with prev as NULL
void reverserec2(Node** head)
{
    if (!head)
        return;
    reverseREC2(*head, NULL, head);
}
  
// A simple and tail-recursive function to reverse
// a linked list.  prev is passed as NULL initially.
void reverseREC2(Node* curr, Node* prev, Node** head)
{
    /* If last node mark it head*/
    if (!curr->next) {
        *head = curr;
  
        /* Update next to prev node */
        curr->next = prev;
        return;
    }
  
    /* Save curr->next node for recursive call */
    Node* next = curr->next;
  
    /* and update next ..*/
    curr->next = prev;
  
    reverseREC2(next, curr, head);
}
int main()
{
    Node *head = new Node();
    Node *ptr = head;
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> ptr->data;
        ptr->next = new Node();
        ptr = ptr->next;
    }
    cin >> ptr->data;
    // head = reverseITR(head);
    // head = reverseREC1(head);
    reverserec2(&head);
    printList(head);
    return 0;
}