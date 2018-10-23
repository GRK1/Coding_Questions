#include<iostream>
#include"stacktemplateenew.h"
using namespace std;
template<typename t>
class queueusingstacks
{
    public:
    stack<t> s1;
    stack<t> s2;

   void enqueue(int data)
    {
       s1.push(data);
    }
    t dequeue()
    {
        if(s2.isempty())
        {
            if(s1.isempty())
            {
                return -1;
            }
            else
            {
               while(!s1.isempty())
               {
                   int k=s1.pop();
                   s2.push(k);

               }
               return (s2.pop());
            }
        }
        else if(!s2.isempty())
        {
            return (s2.pop());
        }
    }
};
int main()
{
    queueusingstacks<int> q1;
    q1.enqueue(45);
    q1.enqueue(65);
    cout<<q1.dequeue()<<endl;
     q1.enqueue(64);
      q1.enqueue(62);
       cout<<q1.dequeue()<<endl;
        cout<<q1.dequeue()<<endl;
         cout<<q1.dequeue()<<endl;
          cout<<q1.dequeue()<<endl;



}
