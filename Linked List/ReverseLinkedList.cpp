// Loop Method
Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *forward = NULL;
    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// Recursive Method

void reverse(Node *&head, Node *curr, Node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

Node *ReverseLinkedList(Node *head)
{
    Node *forward = NULL;
    Node *prev = NULL;
    Node *curr = head;
    reverse(head, curr, prev);
    return head;
}

// Approach2 for recursion

Node* reverse1(Node* head){
    if(head==NULL || head->next == NULL){
        return head;
    }

    Node* chotaHeaad = reverse1(head -> next);

    head -> next -> next = head;
    head -> next = NULL; 

    return  chotaHead;
}