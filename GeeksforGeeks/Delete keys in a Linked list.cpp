/* Link list Node 
struct Node
{
    int data;
    Node* next;
};*/
/*You are required to complete below method*/
Node* deleteAllOccurances(Node *head,int x)
{
    Node *temp,*temp1;
    temp=head;
    while(head!=NULL && head->data==x)
        {
        head=head->next;
        free(temp);
        temp=head;
        }
    while(temp!=NULL)
        {
        if(temp->data==x)
            {
            temp1=temp;
            temp=temp->next;
            free(temp1);
            }
        else
            temp=temp->next;
        }
    return head;
}

