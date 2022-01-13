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
Node *swapnodes(Node *head, int X, int Y)
{
    if (X == Y)
    {
        return head;
    }
    Node *x = head;
    Node *y = head;
    Node *px = NULL;
    Node *py = NULL;
    while (x->data != X and x)
    {
        px = x;
        x = x->next;
    }
    while (y->data != Y and y)
    {
        py = y;
        y = y->next;
    }
    if (px == NULL)
    {
        head = y;
    }else{
        px->next = y;
    }
    if (py == NULL)
    {
        head = x;
    }else{
        py->next = x;
    }
    Node *tempy = y->next;
    y->next = x->next;
    x->next = tempy;
    return head;
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
    int X, Y;
    cin >> X >> Y;
    head = swapnodes(head, X, Y);
    printList(head);
    return 0;
}