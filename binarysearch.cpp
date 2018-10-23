#include<iostream>
#include<algorithm>
using namespace std;
int binary_sort(int a[],int si,int ei,int element)
{
    while(si<=ei)
    {
        int m=(si+ei)/2;
        cout<<m<<endl;
        if(a[m]==element)
        {
            return m+1;
        }
        else if(a[m]>element)
        {
            ei=m-1;
        }
        else if (a[m]<element)
        {
            si=m+1;
        }
    }
    return -1;
}
int main()
{
    int a[]={2,4,6,8,10,11,12};
   int pos=binary_sort(a,0,6,10);
   cout<<"pos is"<<pos;
}
