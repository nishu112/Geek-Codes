/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */


/*you are required to 
complete this function */
bool hasPathSum(Node *root, int sum)
{
static int s=0;
if(root!=NULL)
    s=s+root->data;
if(root->left==NULL && root->right==NULL)
    {
    if(s==sum)
        return true;
    return false;
    }
    return false;
if(root->left!=NULL)
    if(hasPathSum(root->left,sum))
        return true;
if(root->right!=NULL)
    if(hasPathSum(root->right,sum))
        return true;
}
