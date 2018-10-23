#include<iostream>
using namespace std;
int main()
{
    int a[10]={10,9,8,1,2,11,13,4,5,0};
    int current_max=a[0];
    int second_highest=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]>current_max)
        {
            current_max=a[i];
            second_highest=current_max;
        }
        else{
            second_highest= a[i];
        }
    }
    cout<<second_highest;
}
