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
     t frontt()
       {
           if(size==0)
           {
               return 0;
           }
           return front->data;
       }
    int sizee()
    {
        return size;
    }
    bool isempty()
    {
        if(front==NULL)
        {
            return true;
        }
        else
            return false;
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
         return 0;
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

