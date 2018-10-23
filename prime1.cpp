#include<iostream>
#include<math.h>
using namespace std;
int main()
{ int n,testcase,ini;

     cin>>testcase;
    cin>>ini>>n;
    int a[n+1];


    for(int l=0;l<testcase;l++)
    {
    	a[0]=a[1]=0;

    for(int i=2;i<n+1;i++)
    {
    	if(i>=ini)
      a[i]=1;
      else
      a[i]=0;
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
        cout<<i<<endl;
    }
    }
}
