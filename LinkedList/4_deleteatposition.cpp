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
}
Node *Deletelist(Node *head, int temp)
{
    Node *ptr = head;
    Node *del = head;
    if (temp > 1)
    {
        for (int i = 1; i < temp - 1; i++)
        {
            ptr = ptr->next;
        }
        del = ptr->next;
        ptr->next = ptr->next->next;
        delete del;
    }
    else if (temp == 1)
    {
        del = head;
        head = head->next;
        delete del;
    }
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
    cout << "Enter the index you want to delete:-\n";
    int a;
    cin >> a;
    head = Deletelist(head, a);
    printList(head);
}