#include<iostream>
using namespace std;

reverse(int *a,int si,int ei)
{
   while(si<ei)
   {
       int temp=a[si];
       a[si]=a[ei];
       a[ei]=temp;
       si++;ei--;
   }
}
int main()
{int r;
    int a[]={1,2,3,4,5,6,7};
    int n=7;
    cout<<"enter position from where array should be rotated";
    cin>>r;
    reverse(a,0,n-r-1);
    reverse(a,n-r,n-1);
    reverse(a,0,n-1);
    for(int i=0;i<7;i++)
    {
        cout<<a[i];
    }

}
