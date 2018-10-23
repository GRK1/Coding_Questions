#include<iostream>
using namespace std;

class BstNode{
    public:
    int data;
    BstNode *left;
    BstNode *right;
    BstNode(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }

};
BstNode *root;
BstNode* takeinput(BstNode *root,int data)
{
    if(root==NULL)
    {
        BstNode* newnode= new BstNode(data);
        root=newnode;
    }
    else if(data<=root->data)
    {
            root->left=takeinput(root->left,data);

    }
    else
    {
          root->right=takeinput(root->right,data);
    }
   return root;
}
void print(BstNode* root)
{
   if(root==NULL)
   {
       return ;
   }
   print(root->left);
   print(root->right);
   cout<<root->data;
}
bool search(BstNode* root,int data)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==data)
        return true;
    else if(root->data>=data)
    return search(root->left,data);
    else
    return search(root->right,data);
}
int main()
{
    root==NULL;
    root=takeinput(root,5);
    root=takeinput(root,6);
    root=takeinput(root,4);
    root=takeinput(root,3);
    root=takeinput(root,8);
    print(root);
    cout<<endl;
    bool k=search(root,9);
    cout<<k;

}
