#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,2,3,3,3,4};
    int j=0;
    for(int i=0;i<6;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[j]=a[i];
            j++;
        }
    }
    for(int k=0;k<j;k++)
    {
        cout<<a[k];
    }
    cout<<a[6];
}

