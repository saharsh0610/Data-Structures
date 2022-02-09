Node* kReverse(Node* head, int k){
    if(head==NULL){
        return NULL;
    }

    Node* next = NULL;
    Node* curr= head;
    Node* prev = NULL;
    int cnt = 0;

    while (curr!= NULL && cnt < k)
    {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

    if(next != NULL){
        head-> next = kReverse(next , k); 
     }

     return prev;
    
}