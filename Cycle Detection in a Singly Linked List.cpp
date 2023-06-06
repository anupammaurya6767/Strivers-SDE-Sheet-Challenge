/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

bool detectCycle(Node *head)
{
	//	Write your code here
    if(head==NULL || head->next ==NULL)
    return false;

    Node *slow = head;
    Node *fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        return true;
    }

    return false;
}
