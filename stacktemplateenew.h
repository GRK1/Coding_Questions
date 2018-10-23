#include<iostream>
#include"node2.h"
using namespace std;
template<typename t>
class stack
{
    public:
    t sizeee;
    node<t> *head;
    stack()
    {
        sizeee=0;
        head=NULL;
    }
 void push(t data)
 {
     node<t>*newnode=new node<t>(data);
     if(head==NULL)
     {
         head=newnode;
     }
     else
     {
         newnode->next=head;
         head=newnode;
     }
     sizeee++;

 }

 int pop()
 {
  if(head!=NULL)
  {   int k=head->data;
      head=head->next;
      sizeee--;
      return k;
  }
  else if(head==NULL)
  {
    return -1;
  }
 }

 bool isempty()
 {
     if(head==NULL)
     {
         return true;
     }
     else
        return false;
 }

 int top()
 {
   if(head!=NULL)
   {
       return (head->data);
   }
 }

 int sizee()
 {
return sizeee;
 }



};
