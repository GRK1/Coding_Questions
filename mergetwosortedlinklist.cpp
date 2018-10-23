#include<iostream>
using namespace std;
class Node
{
    public :
    int data;
    Node *next;
  Node(int data)
  { this->data=data;
    next=NULL;
  }
};
Node * insertion()
{
    int data;
    cout<<"enter the data";
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        if(head==NULL)
        {
             Node *newnode=new Node(data);
       head=newnode;
       tail=newnode;
        }
        else
        {
            Node *newnode=new Node(data);
            tail->next=newnode;
            tail=tail->next;

        }

        cout<<"enter the next element";
        cin>>data;


    }
    return head;
}
void printlinklist(Node *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
Node * mergetwosortedlinklist(Node *head1,Node *head2)
{
    Node *dummy=NULL;
    Node *newhead1=NULL;
    Node*p=head1;
    Node*q=head2;
    if(p!=NULL&q!=NULL)
    {
      if(p->data<q->data)
    {
        dummy=p;
        p=p->next;
    }
    else{
        dummy=q;
        q=q->next;
    }
    }
    newhead1=dummy;
 while(p!=NULL&&q!=NULL)
 {

     if(p->data<q->data)
     {
       dummy->next=p;
         dummy=dummy->next;
         p=p->next;
     }
     else{

        dummy->next=q;
         dummy=dummy->next;
         q=q->next;
     }
 }
 if(p==NULL)
 {
    dummy->next=q;

 }
 else
 {
     dummy->next=p;
 }
  return newhead1;
}
int main()
{
    Node* head1=insertion();
    Node* head2=insertion();
    Node* headd=mergetwosortedlinklist(head1,head2);
    printlinklist(headd);
}

