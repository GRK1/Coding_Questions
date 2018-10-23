#include<iostream>
using namespace std;
bool ismaxheap(int a[],int size)
{
    for(int i=0;i<=(size-2)/2;i++)
    {
       if((a[i]<a[2*i+1])&&(a[i]<a[2*i-1]))
    {
        return false;
    }
    }
    return true;
    }
int main()
{
    //int a[]={90, 15, 10, 7, 12, 2};
    int a[]={9, 15, 10, 7, 12, 11};
    int size=sizeof(a)/sizeof(int);
    bool ans=ismaxheap(a,size);
    if(ans)
    {
        cout<<"true";
    }
    else
    {

        cout<<"false";
    }
}
