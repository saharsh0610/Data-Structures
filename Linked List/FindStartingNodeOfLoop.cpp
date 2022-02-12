Node* getStartingNode(Node* head){
    if (head == NULL)
    {
        return NULL;
    }

    Node* intesection = floydDetectionLoop(head);
    Node* slow = head;

    while (slow!= intersection)
    {
        slow = slow-> next;

        intersection = intersection -> next;
    }
        return slow;
}