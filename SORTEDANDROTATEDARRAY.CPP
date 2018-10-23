#include<iostream>
#include<algorithm>
using namespace std;
int findpivot(int si,int ei,int a[])
{
    int m=(si+ei)/2;
    if(a[m]>a[m+1])
    {
        cout<<m+1<<"is pivot element"<<endl;
        return m+1;
    }
    else
        {
        if(a[si]<=a[m])
    {

      findpivot(m+1,ei,a);
    }
    else
    {
        findpivot(si,m-1,a);
    }
        }


}
int binarysearch(int si,int ei,int element,int a[])
{
    while(si<=ei)
    {
        int mid=(si+ei)/2;
        if(element==a[mid])
        {
            return mid;
        }
        else if(element<a[mid]){

                cout<<"left"<<mid<<endl;
           return binarysearch(si,mid-1,element,a);
        }
        else if(element>a[mid])
        {  cout<<"right"<<mid<<endl;
          return binarysearch(mid+1,ei,element,a);
        }
    }
}
void findelement(int element,int n,int a[])
{
  int pivot=findpivot(0,n-1,a);


  if(element>=a[pivot]&&element<=a[n-1])
  {
     int k= binarysearch(pivot,n-1,element,a);
     cout<<"position of element is "<<k;
  }
  else
  {
    int k=binarysearch(0,pivot-1,element,a);
    cout<<"position of element is "<<k;
  }
}
int main()
{
    int n;int a[20];int p;
    cout<<"enter the size of array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter element to find";
    cin>>p;
    findelement(p,n,a);


}
