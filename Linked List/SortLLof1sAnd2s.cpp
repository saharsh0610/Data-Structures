// Approach 1

Node *sortList(Node *head)
{
    int one = 0;
    intgzero = 0;
    int two = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zero++;
        }
        else if (temp->data == 1)
        {
            one++;
        }
        else if (temp->data == 2)
        {
            two++;
        }
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        if (zero != 0)
        {
            temp->data = 0;
            zero--;
        }
        else if (one != 0)
        {
            temp->data = 1;
            one--;
        }
        else if (two != 0)
        {
            temp->data = 2;
            two--;
        }
        temp = temp->next;
    }
    return head;
}

// Approach 2 -> When data replacement is not allowed

void insertAtTail(Node *tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}

Node *sortLinkedList(Node *head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;
    while (curr != NULL)
    {
        int val = curr->data;
        if (val == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else if (val == 1)
        {
            insertAtTail(oneTail, curr);
        }
        else if (val == 2)
        {
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }

    // merge threee sublist

    if (oneHead != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}