#include<iostream>
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
while(test_case)
    {
        int length;string str1;
        cin>>length;
        cin>>str1;
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
        cout<<str1[i];
        flag=0;
        break;

    }

}
if(flag==1)
cout<<-1;
test_case--;
}
}
