#include<iostream>
using namespace std;
int squareroot(int n)
{
int start=0;
int end=n;
int ans;
while(start<=end)
{
    int mid=(start+end)/2;
    if(mid*mid==n)
    {
        ans=mid;
        return ans;
    }
    else if((mid*mid)<n)
    {
        start=mid+1;
        ans=mid;
    }
    else
    {
        end=mid-1;
    }
}
return ans;
}
int main()
{ int n;
cin>>n;
    int k=squareroot(n);
    cout<<k;
}
