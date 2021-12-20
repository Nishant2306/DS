// Major differences are listed below: 

// Size: Since data can only be stored in contiguous blocks of memory in an array, its size cannot be altered at runtime due to the risk of overwriting other data. However, in a linked list, each node points to the next one such that data can exist at scattered (non-contiguous) addresses; this allows for a dynamic size that can change at runtime.

// Memory allocation: For arrays at compile time and at runtime for linked lists. but, a dynamically allocated array also allocates memory at runtime. 

// Memory efficiency: For the same number of elements, linked lists use more memory as a reference to the next node is also stored along with the data. However, size flexibility in linked lists may make them use less memory overall; this is useful when there is uncertainty about size or there are large variations in the size of data elements; memory equivalent to the upper limit on the size has to be allocated (even if not all of it is being used) while using arrays, whereas linked lists can increase their sizes step-by-step proportionately to the amount of data.

// Execution time: Any element in an array can be directly accessed with its index; however in the case of a linked list, all the previous elements must be traversed to reach any element. Also, better cache locality in arrays (due to contiguous memory allocation) can significantly improve performance. As a result, some operations (such as modifying a certain element) are faster in arrays, while some others (such as inserting/deleting an element in the data) are faster in linked lists.

// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next = NULL;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
	while (n->next != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

// Driver code
int main()
{
	Node* head = new Node();
    Node* ptr = head;
    for(int i = 0; i<5; i++){
        cin >> ptr->data;
        ptr->next = new Node();
        ptr = ptr -> next;
    }

	printList(head);

	return 0;
}

// This is code is contributed by rathbhupendra
