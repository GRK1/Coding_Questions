#include<iostream>
using namespace std;
class A
{
    public:
    static int x;
    A()
    {
        x++;
    }
};
int A::x=0;
int main()
{
  A obj1,obj2;
  A *ptr=new A;
  cout<<A::x;
}
