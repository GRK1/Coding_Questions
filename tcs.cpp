#include<iostream>
#include<math.h>
using namespace std;
//1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187
int main()
{
    int n;int no_of_term;
    cin>>n;
    if(n%2==1)
    {
       no_of_term=(n+1)/2;
       int result=pow(2,no_of_term-1);
       cout<<result;
    }
    else
    {
       no_of_term=n/2;
       int result=pow(3,no_of_term-1);
       cout<<result;

    }
}
