#include<iostream>
using namespace std;
int findmajorityelement(int a[],int n)
{
 int majority=0;int count=1;
 for(int i=1;i<n;i++)
 {
     if(a[majority]=a[i])
     {
         count++;
     }
     else
     {
         count--;
     }
     if(count==0)
     {
         majority=i;
         count=1;
     }
 }
 return majority;
}
void getresult(int a[],int size)
{
    int index=findmajorityelement(a,size);
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[index]==a[i])
        {
            count++;
        }
    }
    if(count>size/2)
    {
        cout<<"majority element is "<<a[index];
    }
    else
    {

        cout<<"no majority element";
    }

}
int main()
{
    int n;int a[20];
    cout<<"enter the size of array ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    getresult(a,n);
}
