#include<iostream>
using namespace std;
int main()
{
   int a[]={1,2,4,5,3,6,9,8,10};
   int first_highest=-1;
   int second_highest=-1;
   for(int i=0;i<9;i++)
   {
       if(a[i]>first_highest)
       {
           second_highest=first_highest;
           first_highest=a[i];
       }
       else if(a[i]<first_highest&&a[i]>second_highest)
       {
           second_highest=a[i];
       }
   }
   cout<<second_highest;
}
