#include<iostream>
using namespace std;
class SinglyLinkedListNode {
    public:
    int data;
    SinglyLinkedListNode* next;
    SinglyLinkedListNode(int data)
    {
        this->data=data;
        this->next=NULL;
    }
 };




 void printlinklist(SinglyLinkedListNode *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
SinglyLinkedListNode * insertion()
{
    int data;
    cout<<"enter the data";
    cin>>data;
    SinglyLinkedListNode *head=NULL;
    SinglyLinkedListNode *tail=NULL;
    while(data!=-1)
    {
        if(head==NULL)
        {
             SinglyLinkedListNode *newnode=new SinglyLinkedListNode(data);
       head=newnode;
       tail=newnode;
        }
        else
        {
            SinglyLinkedListNode *newnode=new SinglyLinkedListNode(data);
            tail->next=newnode;
            tail=tail->next;

        }

        cout<<"enter the next element";
        cin>>data;


    }
    return head;
}
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }

    SinglyLinkedListNode* newhead=NULL;
    SinglyLinkedListNode* newtail=NULL;
    if(head1->data>head2->data)
    {
        newhead=head2;
        newtail=head2;
        head2=head2->next;
    }

    else if(head2->data>head1->data)
    {
        newhead=head1;
        newtail=head1;
        head1=head1->next;
    }
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1->data>head2->data)
        {

            newtail->next=head2;
            head2=head2->next;
            newtail=newtail->next;

        }

        else if(head1->data<head2->data)
        {
            newtail->next=head1;
            head1=head1->next;
            newtail=newtail->next;
        }

    }
    if(head1==NULL)
    {
        newtail->next=head2;
        return newhead;
    }
    if(head2==NULL)
    {
        newtail->next=head1;
        return newhead;
    }
return newhead;
}
int main()
{
    SinglyLinkedListNode* head1=insertion();
     SinglyLinkedListNode* head2=insertion();
    printlinklist(head1);
     printlinklist(head2);
   SinglyLinkedListNode *newhead= mergeLists(head1,head2);

    printlinklist(newhead);



}
