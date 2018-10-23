#include<iostream>
#include"binarytree.h"
#include"queueetemplate.h"
using namespace std;
 binarytree<int>* takeinput()
{
    int rootdata;
    cout<<"Enter root data";
    cin>>rootdata;
    if(rootdata==-1)
    {
        return NULL;
    }
    binarytree<int>* root=new binarytree<int>(rootdata);
    queue<binarytree<int>*> q;
    q.enqueue(root);
    while(!q.isempty())
    {
        binarytree<int>* currentnode=q.dequeue();
        int leftchild;
        int rightchild;
        cout<<"ENTER LEFT CHILD OF "<<currentnode->data<<" ";
        cin>>leftchild;
        if(leftchild!=-1)
        {
            binarytree<int>* leftnode=new binarytree<int>(leftchild);
            currentnode->leftchild=leftnode;
            q.enqueue(leftnode);
        }
        cout<<"enter right child of "<<currentnode->data<<" ";
        cin>>rightchild;
        if(rightchild!=-1)
        {

            binarytree<int>* rightnode=new binarytree<int>(rightchild);
            currentnode->rightchild=rightnode;
            q.enqueue(rightnode);
        }
    }
    return root;
}
bool searchh(binarytree<int>* root,int key)
{
if(root==NULL)
{
    return false;
}
queue<binarytree<int>*> q;
q.enqueue(root);
while(!q.isempty())
{
    binarytree<int>* node=q.frontt();

        if (node->data == key)
            return true;

        // Remove current node and enqueue its children
        q.dequeue();
        if (node->leftchild != NULL)
            q.enqueue(node->leftchild);
        if (node->rightchild != NULL)
            q.enqueue(node->rightchild);
}
 return false;
}
void preorder(binarytree<int>* root)
{
  if(root==NULL)
  {
      return;
  }
  cout<<root->data<<" ";
  preorder(root->leftchild);
  preorder(root->rightchild);
}
void inorder(binarytree<int>* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->leftchild);
    cout<<root->data;
    inorder(root->rightchild);
}
void postorder(binarytree<int>* root)
{

    if(root==NULL)
    {
        return;
    }
    postorder(root->leftchild);
    postorder(root->rightchild);
    cout<<root->data;
}
void levelordertraversal(binarytree<int>* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<binarytree<int>*> q;
    q.enqueue(root);
    while(!q.isempty())
    {
        binarytree<int>* node=q.dequeue();
        cout<<node->data;
        if(node->leftchild!=NULL)
        {
            q.enqueue(node->leftchild);
        }
        if(node->rightchild!=NULL)
        {
            q.enqueue(node->rightchild);
        }
    }
}
void print( binarytree<int>* root) {
    if(root == NULL) {
        return;
    }
    cout << root -> data << " : ";
    if(root -> leftchild != NULL) {
        cout << root -> leftchild -> data ;
    }
    cout << ", ";
    if(root -> rightchild != NULL) {
        cout << root -> rightchild -> data;
    }
    cout << endl;
    print(root -> leftchild);
    print(root -> rightchild);

}
int main()
{
    binarytree<int>* node=takeinput();
    //bool ans=searchh(node,6);
    //cout<<ans;
    //print(node);
    preorder(node);
    cout<<endl;
    postorder(node);
    cout<<endl;
    inorder(node);
    cout<<endl;
    levelordertraversal(node);
}
