#include<iostream>
using namespace std;
void selection_sort(int a[],int n)
{
    int mini;
   for(int i=0;i<=n-2;i++)
   { mini=i;
       for(int j=i+1;j<n;j++)
       {
           if(a[j]<a[mini])
           {
               mini=j;
           }
       }
       int temp=a[i];
       a[i]=a[mini];
       a[mini]=temp;
   }
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
}
int main()
{
    int a[6]={1,4,2,3,6,5};
    selection_sort(a,6);
}
