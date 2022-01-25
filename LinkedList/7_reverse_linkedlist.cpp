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

Node *reverseREC(Node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }
    Node *rest = reverseREC(head->next);
    head->next->next = head;
    head -> next = NULL;
    return rest;
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
    head = reverseREC(head);
    printList(head);
    return 0;
}