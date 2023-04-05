/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

/*bool detectCycle(Node *head){
	//	Write your code here.
        if (head == NULL || head->next == NULL) {
        return false;}
		Node* slow=head;
		Node* fast=head->next;
                while (fast != NULL && fast->next != NULL) {
                  if (fast == slow) {
					  return true;
                  }
				slow=slow->next;
				fast=fast->next->n;
                }
				return false;
}*/
bool detectCycle(Node *head){
    if(head == nullptr || head->next == nullptr){
        // empty list or list with one element has no cycle
        return false;
    }
    
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast != nullptr && fast->next != nullptr){
        if(slow == fast){
            // cycle detected
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // no cycle detected
    return false;
}
