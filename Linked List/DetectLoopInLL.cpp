// By using map with tns O(n)

bool detectLoop(Node* head){
    if (head == NULL)
    {
        return false;
    }

    map<Node*, bool> visited;
    Node* temp = head;

    while (temp!= NULL)
    {
        if (visited[temp]=true)
        {
            return true;
        }

        visited[temp]= true;
        temp = temp-> next;
        
    }
    
    return false;
}


// Floyd's Cycle Detection Algo with time complexity O(n) and space O(1)


Node* floydDetectLoop(Node* head){
    if (head == NULL)
    {
        return false;
    }    

    Node* slow = head;
    Node* fast = head;

    while (slow!= NULL && fast!= NULL)
    {
        fast = fast -> next;

        if (fast!= NULL)
        {
            fast = fast-> next;
        }
        slow = slow-> next;

        if (slow==fast)
        {
            return true;
        }
        
        return false;
    }
    
}