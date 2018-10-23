#include<iostream>
using namespace std;
class My
{
    public:
    static int c;
    My()
    {
        c++;
    }
};
int My::c=0;
int main()
{
   cout<<My::c;
}
