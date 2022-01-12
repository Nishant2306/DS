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
int CountNodeITR(Node* head){
    int count = 0;
    Node* current = head;
    while(current!=NULL){
        current = current ->next;
        count++;
    }
    return count;
}
int CountNodeREC(Node* head){
    Node* current = head;
    if(current == NULL){
        return 0;
    }else{
        return 1+CountNodeREC(current->next);
    }
}
int main(){
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
    printList(head);
    // cout << CountNodeITR(head) << endl;
    cout << CountNodeREC(head) << endl;
return 0;
}