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

 void pop()
 {
  if(head!=NULL)
  {
      head=head->next;
      sizeee--;
  }
  else if(head==NULL)
  {
      cout<<"underflow";
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
int main()
{
   stack<int> s;
   s.push(20);
   cout<<s.sizee()<<" ";
   cout<<endl;
   s.push(30);

   cout<<s.sizee()<<" ";
   cout<<endl;
   cout<<s.top()<<" ";
   cout<<endl;
   s.pop();
   cout<<s.top()<<" ";
   cout<<endl;
   cout<<s.sizee()<<" ";
   cout<<endl;
   s.pop();

   //s.pop();


}
