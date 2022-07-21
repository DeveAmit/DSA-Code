/****************************************************************
    Following is the Linked List node structure

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

Node* insertionSortLL(Node *head)
{
    // Write your code here.
    Node* newhead=head;
    Node* temp=head->next; //b4 newhead->next is NULL
    newhead->next=NULL;


    // will create a LL ordered one.
    while(temp!=NULL){

        Node* next=temp->next; // store the next beforehand cuz, the node next might change so to increment the temp pointer afterwards.
        if(newhead->data > temp->data){ // update the head pointer if the temp is less then the newhead
            Node* n=temp;
            n->next=newhead;
            newhead=n;



        }else{ // else right mein jodte jao.
            Node* prev=NULL;
            Node* j=newhead;
            while(j!=NULL && j->data <= temp->data){
                prev=j;
                j=j->next;
            }
            Node* n=temp;
            prev->next=n;
            n->next=j;    
        }
        temp=next;

    }

    return newhead; //newhead

}