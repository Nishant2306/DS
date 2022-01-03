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

Node *DeleteITR(Node *head, int temp)
{
    Node *ptr = head;
    Node *prev = head;
    Node *del = head;
    while (ptr->next != NULL)
    {
        if (ptr->next->data == temp)
        {
            del = ptr->next;
            ptr->next = ptr->next->next;
            delete del;
        }
        else
        {
            prev = ptr;
            ptr = ptr->next;
        }
    }
    return head;
}
void DeleteREC(Node *&head, int temp)
{
    Node *ptr = head;
    Node *prev = head;
    Node *del = head;
    
     if (ptr->next->data == temp)
        {
            del = ptr->next;
            ptr->next = ptr->next->next;
            delete del;
            return;
        }
    
     DeleteREC(ptr->next, temp);
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
    cout << "Enter the number you want to delete:- \n";
    int a;
    cin >> a;
    // head = DeleteITR(head, a);
    DeleteREC(head, a);
    printList(head);
}