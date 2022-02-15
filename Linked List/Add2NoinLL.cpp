class solution
{
private:
    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
    }

    return prev;

    void insertAtTail(struct Node *&head, struct Node *&tail, int val)
    {
        Node *temp = new Node(val);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }

        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

public:
    struct Node *add(struct Node *first, struct Node *second)
    {
        int carry = 0;
        Node *ansHead = NULL;
        Node *tailHead = NULL;
        while (first != NULL || second != NULL || carry != NULL)
        {
            int val1 = 0;
            if (first != NULL)
            {
                val1 = first->data;
            }
            int val2 = 0;
            if (second != NULL)
            {
                val2 = second->data;
            }
            int sum = carry + val1 + val2;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);

            carry = sum / 10;
            if (first != NULL)
            {
                first = first->next;
            }
            if (second != NULL)
            {
                second = second->next;
            }
        }
        return ansHead;
    }
};