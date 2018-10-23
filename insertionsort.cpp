#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
   for(int i=0;i<n;i++)
   {
       for(int j=i;j>0;j--)
       {
           if(a[j]<a[j-1])
           {
               int temp=a[j-1];
               a[j-1]=a[j];
               a[j]=temp;
           }
       }
   }
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
}
int main()
{
    int a[6]={4,2,5,7,1,3};
    insertionsort(a,6);
}
