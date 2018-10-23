#include<iostream>
#include<math.h>
using namespace std;
void findprime(int n)
{
    int array[n+1]={1};
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(array[i]==1)
        {
         for(j=2;j*i<=n;j++)
         {
             arr[j*i]=0;
         }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        cout<<i<<endl;
    }


}
int main()
{
    int n;
   cin>>n;
   findprime(n);
}
