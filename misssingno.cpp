#include<iostream>
using namespace std;
int missing_element(int arr[],int n)
{
    int total_xor=1;
    int arr_xor=arr[0];
    for(int i=2;i<=n+1;i++)
    {
        total_xor=total_xor^i;
    }
    cout<<total_xor<<endl;
    for(int i=1;i<n;i++)
    {
        arr_xor=arr_xor^arr[i];
    }
    cout<<arr_xor<<endl;
    return(total_xor^arr_xor);
}
int main()
{
    int array[9]={1,2,3,4,6,7,8,9,10};
    int k=missing_element(array,9);
    cout<<k;

}
