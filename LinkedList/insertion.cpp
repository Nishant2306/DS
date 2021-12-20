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
 
int main(){
    Node* head = new Node();
    Node* ptr = head;
    for(int i =0; i< 5; i++){
        cin >> ptr-> data;
        ptr -> next = new Node();
        ptr = ptr-> next;
    }
}