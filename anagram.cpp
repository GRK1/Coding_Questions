#include<iostream>
#include<stdio.h>
using namespace std;
bool isanagram(string string1,string string2)
{
    if(string1.length()!=string2.length())
{
    return false;
}
    int count[128]={0};
    for(int i=0;i<string1.length();i++)
    {
        count[string1[i]]++;
    }
    for(int i=0;i<string2.length();i++)
    {
        count[string2[i]]--;
    }
    for(int i=0;i<string1.length();i++)
    {
      if (count[string1[i]]==0)
      {

      }
      else
      {
          return false;
      }

    }
    return true;

}
int main()
{ string string1,string2;
    cout<<"enter string 1";
    cin>>string1;
    cout<<"enter string 2";
    cin>>string2;
    bool a=isanagram(string1,string2);
    if(a)
    {
        cout<<"true";
    }
    else
    {

        cout<<"false";
    }

}
