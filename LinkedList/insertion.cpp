#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void printList(Node* n)
{
	while (n->next != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}
Node* InsertAtFront(Node* head, int new_data){
    Node* new_node = new Node;
    new_node -> data = new_data;
    new_node -> next = head;
    return new_node;
}
int main(){
    Node* head = new Node();
    Node* ptr = head;
    int n=5;
    for(int i =0; i< n-1; i++){
        cin >> ptr-> data;
        ptr -> next = new Node();
        ptr = ptr-> next;
    }
    cin >> ptr-> data;
    cout << "Enter the integer you want to insert:- \n";
    int a;
    cin >> a;
    head = InsertAtFront(head, a);
    printList(head);
}