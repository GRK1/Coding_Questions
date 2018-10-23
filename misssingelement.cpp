#include<iostream>
using namespace std;
 int findelement(int a[],int sizee)
 {
     int x1=a[0];
     int x2=a[0];
     int p=0;
     for(int i=1;p<sizee-1;i++)
     {
        x1=x1^a[i];
      cout<<x1<<endl;
        p++;

     }
     cout<<endl;
     int k=a[0]+1;p=0;
     for(int i=k;p<sizee;i++)
     {
         x2=x2^i;
         cout<<x2<<endl;
         p++;
     }
     return(x1^x2);
 }
int main()
{ int a[20];int sizee;
cout<<"enter size of array";
    cin>>sizee;
    for(int i=0;i<sizee;i++)
    {
        cin>>a[i];
    }
    int misselement=findelement(a,sizee);
    cout<<endl;
    cout<<endl;
     cout<<misselement;
}

