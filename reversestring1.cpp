#include<iostream>
using namespace std;
int main()
{
    string s1="Welcome To";
    int k=s1.length();
    int p=k;
    for(int i=0;i<k/2;i++)
    {
            char temp=s1[i];
            s1[i]=s1[p-1];
            s1[p-1]=temp;
            p--;

    }
    cout<<s1;
}
