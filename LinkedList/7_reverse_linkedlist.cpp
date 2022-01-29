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

Node* reverseStack(Node* head){
    stack<Node*> s;
    Node* curr = head;
    while(curr->next != NULL){
        s.push(curr);
        curr = curr->next;
    }
    head = curr;
    while(!s.empty()){
        curr -> next = s.top();
        s.pop();
        curr = curr-> next;
    }
    curr->next = NULL;
    return head;
}

int count(Node* head){
    Node* curr = head;
    int a = 1;
    while(curr!=NULL){
        curr= curr->next;
        a++;
    }
    return a;
}
Node* reverseArray(Node* head){
    Node* curr = head;
    int i =  count(head);
    int j = 1;
    int arr[i];
    while(i and curr!=NULL){
        arr[j++] = curr -> data;
        curr = curr -> next;
        i--;
    }
    j--;
    while(j){
        cout << arr[j--] << " ";
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
    // head = reverseITR(head);
    // head = reverseREC1(head);
    // reverserec2(&head);
    // head = reverseStack(head);
    head = reverseArray(head);
    // printList(head);
    return 0;
}