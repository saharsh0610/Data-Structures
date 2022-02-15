// Approach 1--> Put list-> data into an array and check-O(n) and O(n)

class solution
{
private:
    bool checkPalindrome(vector<int> arr)
    {
        int n = arr.size();
        int s = 0;
        int e = n - 1;

        while (s <= e)
        {
            if (arr[s] != arr[e])
            {
                return 0;
            }

            s++;
            e--;
        }

        return 1;
    }

public:
    bool isPalndrome(Node *head)
    {
        vector<int> arr;
        Node *temp = head;
        while (temp != NULL)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        }

        return checkPalindrome;
    }
};

// Approach2 - Find Middle, Reverse LL after middle and then caompare both halves-> O(n) and O(1)

class Solution
{
private:
    Node *getMiddle(Node *head)
    {
        Node *slow = head;
        Node *fast = head->next;
        while (fast ! = NULL && fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }

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

        return prev;
    }

public:
    bool isPalindrome(Node *head)
    {
        if (head->next == NULL)
        {
            return true;
        }

        Node *middle = getMiddle(head);
        Node *temp = middle->next;

        middle->next = reverse(temp);

        // Compare both halves

        Node *head1 = head;
        Node *head2 = middle->next;

        while (head2 != NULL)
        {
            if (head2->data != head1->data)
            {
                return false;
            }

            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
};