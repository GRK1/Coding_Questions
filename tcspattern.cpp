#include<iostream>
using namespace std;
int main()
{
    int first_no,n;
    cin>>first_no;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
         first_no=first_no+5;
        }
        else
        {
            first_no=first_no-2;
        }
    }
    cout<<first_no;


}
