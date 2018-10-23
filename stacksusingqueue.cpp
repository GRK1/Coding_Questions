#include<iostream>
#include"queueetemplate.h"
using namespace std;
template<typename t>
class stackusingqueue
{
    public:
    queue<t> q1;
    queue<t> q2;
    int currsize;
    stackusingqueue()
    {
        currsize=0;
    }

    void push(t data)
    {
      q1.enqueue(data);
      currsize++;
    }
    t pop()
    {
        if(q1.isempty())
        {
            return -1;
        }
      while(currsize>1)
      {
          t data=q1.dequeue();
          q2.enqueue(data);
          currsize--;
      }
      t ans=q1.dequeue();
      queue<t>q;
      q=q1;
      q1=q2;
      q2=q;
      return ans;
    }
};
int main()
{
    stackusingqueue<int> s1;
    s1.push(10);
    s1.push(50);
    cout<<s1.pop();
    cout<<s1.pop();
    cout<<s1.pop();


}
