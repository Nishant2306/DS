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
Node *reverseITR(Node *head, int k)
{
    Node *next = NULL;
    Node *current = head;
    Node *prev = NULL;
    int count = 0;
    while (current != NULL and count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    // head = prev;
    if(next != NULL){
    head -> next = reverseITR(next, k);
    }
    return prev;
}
int main()
{
    Node *head = new Node();
    Node *ptr = head;
    int n = 8;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> ptr->data;
        ptr->next = new Node();
        ptr = ptr->next;
    }
    cin >> ptr->data;
    int k;
    cin >> k;
    head = reverseITR(head, k);
    printList(head);
    return 0;
}