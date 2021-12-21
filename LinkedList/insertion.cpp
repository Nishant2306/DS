#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}
void InsertAtFront(Node* head, int new_data){
    Node* new_node = new Node;
    new_node -> data = new_data;
    new_node -> next = head;
    head = new_node;

}
int main(){
    Node* head = new Node();
    Node* ptr = head;
    int n=5;
    for(int i =0; i< n; i++){
        cin >> ptr-> data;
        ptr -> next = new Node();
        ptr = ptr-> next;
    }
    cout << "Enter the integer you want to insert:- \n";
    int a;
    cin >> a;
    InsertAtFront(head, a);
    printList(head);
}