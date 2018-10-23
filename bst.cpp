#include<iostream>
using namespace std;
 class node
 {
     public:
   node *right;
   node *left;
   int data;
     node(int data)
     {
        right=NULL;
        left=NULL;
        this->data=data;
     }
 };
node *bst(int a[],int siz)
{
    int count=0;
    node *newnode=new node(a[0]);
   label:
    while(count<(siz-1))
    {


        node *q=new node(a[count+1]);
        node *p=newnode;
        while(p->data>=q->data)
        {

            if(p->left==NULL)
            {
               p->left=q;
               count++;
               goto label;

            }

            else
                p=p->left;

        }

        while(p->data<=q->data)
        {
            if(p->right==NULL)
            {
                 p->right=q;
                 count++;
                 goto label;
            }

            else
                p=p->right;
        }

    }
    return newnode;
}
void print(node *head)
{
    if(head==NULL)
    {

        return;
    }

    print(head->left);
    cout<<head->data;
    print(head->right);

}
int main()
{ int p;int a[20];
    cout<<"Enter elements of Array";
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
    }
    node *head=bst(a,p);
    print(head);

}
