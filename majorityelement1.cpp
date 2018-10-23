#include<iostream>
#include<unordered_map>
using namespace std;
void occurence(int a[],int n)
{ int k=0,b=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
   for(auto x:mp)
   {
       cout<<x.first<<" "<<x.second<<endl;

       if(x.second>b)
       {
           k=x.first;
           b=x.second;
       }
   }
   if(b>n/2)
   cout<<"Majority element is "<<k<<endl;
}
int getmajority(int a[],int n)
{

}
int main()
{
   int n;
   cout<<"enter size";
   cin>>n;
   int a[n];
   cout<<"enter array";
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   occurence(a,n);
   //getmajority(a,n);
}
