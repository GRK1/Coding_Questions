#include<iostream>
#include<math.h>
using namespace std;
int main()
{ int n;
    cin>>n;
    int a[n+1];
    a[0]=a[1]=0;
    for(int i=2;i<n+1;i++)
    {
      a[i]=1;
    }

    for(int j=2;j<sqrt(n);j++)
    {
        if(a[j]==1)
        {
          for(int k=j;j*k<=n;k++)
          {
              a[j*k]=0;
          }
        }
    }
    for(int i=2;i<=n;i++)
    {    if(a[i]==1)
        cout<<i;
    }
}
