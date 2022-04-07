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
void DetectAndRemove(Node *head){
    Node *slow = head;
    Node *fast = head;
    while(slow!=NULL and fast!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            cout << "YES\n";
            break;
        }
    }
    Node *ptr1 = slow;
    Node *ptr2 = slow;
    int k = 1;
    cout << ptr1->data << endl;
    while(ptr1->next != ptr2){
        ptr1 = ptr1->next;
        k++;
    }
    ptr1 = head;
    ptr2 = head;
    for(int i = 0; i<k; i++){
        ptr2 = ptr2->next;
    }
    while(ptr2!=ptr1){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    while(ptr2->next != ptr1){
        ptr2 = ptr2->next;
    }
    ptr2->next = NULL;
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
    ptr->next = head->next;
    DetectAndRemove(head);
    printList(head);
    return 0;
}