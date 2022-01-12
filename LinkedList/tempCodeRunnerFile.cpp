int CountNodeREC(Node* head)
{
    int count = 0;
    Node* current = head;
     if (current != NULL)
        {
            current = current -> next;
            count++;
        }
     CountNodeREC(current);
     return count;
}