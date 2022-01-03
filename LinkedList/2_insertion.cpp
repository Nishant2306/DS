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
Node *InsertAtFront(Node *head, int new_data)
{
    Node *new_node = new Node;
    new_node->data = new_data;
    new_node->next = head;
    return new_node;
}

Node *InsertInMid(Node *head, int new_data, int tmp)
{
    Node *new_node = new Node;
    Node *ptr = head;
    for (int i = 1; i < tmp - 1; i++)
    {
        ptr=ptr->next;
    }
    new_node-> next = ptr->next;
    ptr->next = new_node;
    new_node->data= new_data;
    return head;
}
Node *InsertInEnd(Node *head, int new_data, int n){
    Node *new_node = new Node;
    Node *ptr = head;
    for(int i=1; i<n; i++){
        ptr=ptr->next;
    }
    ptr->next = new_node;
    new_node->data= new_data;
    new_node->next = NULL;
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
    // cout << "Enter the integer you want to insert in starting:- \n";
    // int a;
    // cin >> a;
    // head = InsertAtFront(head, a);
    // cout << "Enter the integer you want to insert in mid:- \n";
    // int b;
    // cin >> b;
    // cout << "enter the place at which you want to enter the element:- \n";
    // int c;
    // cin >> c;
    // head = InsertInMid(head, b, c);
    cout << "Enter the integer you want to insert in end:- \n";
    int d;
    cin >> d;
    head = InsertInEnd(head, d, n);
    printList(head);
}