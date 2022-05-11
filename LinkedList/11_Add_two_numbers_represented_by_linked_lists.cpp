#include<bits/stdc++.h>
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
    Node *head1 = new Node();
    Node *ptr1 = head1;
    int m = 5;
    for (int i = 0; i < m - 1; i++)
    {
        cin >> ptr1->data;
        ptr1->next = new Node();
        ptr1 = ptr1->next;
    }
    cin >> ptr1->data;
    return 0;
}