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

// void mergeList(Node *heada, Node *headb)
// {
//     Node *ptrc = new Node();
//     Node *headc = ptrc;
//     Node *curra = heada;
//     Node *currb = headb;
//     while (curra != NULL and currb != NULL)
//     {
//         // cout << "Ok\n";
//         if (curra->data < currb->data)
//         {
//             // cout << "OK1\n";
//             ptrc->next = curra;
//             curra = curra->next;
//             ptrc = ptrc->next;
//         }
//         else
//         {
//             // cout << "OK2\n";
//             ptrc->next = currb;
//             currb = currb->next;
//             ptrc = ptrc->next;
//         }
//     }
//     if (curra != NULL)
//     {
//         ptrc->next = curra;
//     }
//     else if (currb != NULL)
//     {
//         ptrc->next = currb;
//     }
//     printList(headc->next);
// }

Node *mergeListREC(Node *heada, Node *headb)
{
    Node *ptrc = new Node();
    Node *headc = ptrc;
    // cout << "Ok\n";
    if(heada == NULL){
        return headb;
    }else if(headb == NULL){
        return heada;
    }

    if (heada->data < headb->data)
    {
        // cout << "OK1\n";
        ptrc = heada;
        ptrc -> next = mergeListREC(heada-> next, headb);
    }
    else
    {
        // cout << "OK2\n";
        ptrc = headb;
        ptrc -> next = mergeListREC(heada, headb -> next);
    }
    return ptrc;
}
int main()
{
    Node *heada = new Node();
    Node *ptra = heada;
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> ptra->data;
        ptra->next = new Node();
        ptra = ptra->next;
    }
    cin >> ptra->data;
    cout << endl;
    Node *headb = new Node();
    Node *ptrb = headb;
    int m = 5;
    for (int i = 0; i < m - 1; i++)
    {
        cin >> ptrb->data;
        ptrb->next = new Node();
        ptrb = ptrb->next;
    }
    cin >> ptrb->data;
    // mergeList(heada, headb);
    Node* head = new Node();
    head = mergeListREC(heada, headb);
    printList(head);
    return 0;
}