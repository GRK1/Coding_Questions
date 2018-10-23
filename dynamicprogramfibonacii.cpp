#include<iostream>
#define max 100
#define nil -1
using namespace std;

int arr[max];
void initialize()
{
 for(int i=0;i<max;i++)
{
    arr[i]=nil;
}
}

int fibonacii(int n)
{
 if(arr[n]==nil)
 {
   if(n<=1)
   {
       arr[n]=n;
   }
   else
     arr[n]=fibonacii(n-1)+fibonacii(n-2);
 }
 return arr[n];
}
int main()
{
    int n;
    initialize();
   cout<<"enter term to be calculated for fibonacii series";
   cin>>n;
   int k=fibonacii(n);
   cout<<k;
}
