#include<iostream>
#include<math.h>
using namespace std;
void findprime(int n)
{
    int array[n+1];
     for(int i=0;i<n;i++)
    {
    array[i]=1;
    }
   /* for(int i=0;i<5;i++)
    {
        cout<<array[i];
    }*/
    array[0]=0;
    array[1]=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(array[i]==1)
        {
         for(int j=2;j*i<=n;j++)
         {
             array[j*i]=0;
         }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(array[i]==1)
        cout<<i<<endl;
    }


}
int main()
{
    int n;
   cin>>n;
   findprime(n);
}
