Node* deleteNode(Node *head,int x)
{
struct Node *temp=head,*temp2;
if(x==1)
    {
    head=head->next;
    free(temp);
    return head;
    }
int c=1;
while(c<x-1)
    {
    c++;
    temp=temp->next;
    }
temp2=temp->next;
temp->next=(temp2->next)-;
free(temp2);
return head;
}
