#include<iostream>
using namespace std;
add(string s1,string s2)
{
 int k1=s1.length();
 int k2=s2.length();
 int max;

 if(k1>=k2)
 {

     max=k1;
 }
 else if(k1<k2)
 {

     max=k2;
 }
int a[max]={0};
     int b[max]={0};
 for(int i=0;i<k1;i++)
 {
     a[i]=s1[k1-i-1]-'0';

 }
for(int i=0;i<max;i++)
{
    cout<<a[i];
}
cout<<endl;
 for(int i=0;i<k2;i++)
 {
     b[i]=s2[k2-i-1]-'0';

 }
for(int i=0;i<max;i++)
{
    cout<<b[i];
}
cout<<endl;
 int nwarray[max+1];
 int carry=0;
 for(int i=0;i<max;i++)
 {
    nwarray[i]=(a[i]+b[i]+carry)%10;

    if(((a[i]+b[i]+carry)/10)>=1)
        carry=1;
    else
        carry=0;
 }int p;
 if((a[max-1]+b[max-1]+carry)>=10)
 {
      p=max+1;
 }
 else
 {
      p=max;
 }
 for(int i=p-1;i>=0;i--)
 {
     cout<<nwarray[i];
 }
}
int main()
{
    string s1;
    string s2;
    s1="123456";
    s2="3245657";
    add(s1,s2);

}
