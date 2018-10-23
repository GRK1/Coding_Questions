#include<iostream>
using namespace std;
int main()
{
string str1="geeksforgeeks";
int count[256]={0};
for(int i=0;i<str1.length();i++)
{
   count[str1[i]]++;
}
int flag=1;
for(int i=0;i<str1.length();i++)
{
    if(count[str1[i]]==1)
    {
        cout<<"non repeating character is "<<str1[i];
        flag=0;
        break;

    }

}
if(flag==1)
cout<<"every character is repeating";


}
