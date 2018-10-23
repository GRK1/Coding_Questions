#include<iostream>
using namespace std;
void removedupl(int a[],int n)
{
    int j=0;
   for(int i=0;i<n-1;i++)
   {
       if(a[i]!=a[i+1])
       {
           a[j]=a[i];
           j++;
       }
   }
   a[j]=a[n-1];
   for(int i=0;i<=j;i++)
   {
       cout<<a[i];
   }
}
int main()
{
    int a[10]={1,2,2,3,3,4,5,6,6,7};
    removedupl(a,10);
}
