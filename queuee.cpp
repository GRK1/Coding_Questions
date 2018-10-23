#include<iostream>
#include"node2.h"
using namespace std;
template<typename t>

class queue
{
    public:
    node<t> *rear;
    node<t> *front;
    t size;

    queue()
    {
        rear=NULL;
        front=NULL;
        size=0;
    }
    int sizee()
    {
        return size;
    }
   void enqueue(t data)
   {
     node<t> * newnode=new node<t>(data);
     if(front==NULL)
     {
         front=newnode;
         rear=newnode;

     }
     else
        {
           rear->next=newnode;
          rear=rear->next;
        }
        size++;
   }
   t dequeue()
   {
     if(front==NULL)
     {
         return -1;
     }
     else if(front!=NULL)
     {
         t k=front->data;
         front=front->next;
           size--;
         return k;

     }
   }
};
int main()
{
 queue <int>q1;
 q1.enqueue(42);
 q1.enqueue(23);
 cout<<q1.sizee()<<endl;
 cout<<q1.dequeue()<<endl;
 q1.enqueue(32);
 cout<<q1.dequeue()<<endl;
 cout<<q1.sizee()<<endl;
}
