#include<iostream>
using namespace std;
class My
{
    public:
    int c=0;
    My()
    {
        c++;
    }
};

int main()
{
    My obj;
   cout<<obj.c;
}

