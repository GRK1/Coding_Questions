/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[]="this is rahul";
    char* token;
    token=strtok(str," ");
    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL," ");
    }
}*/
#include<iostream>
#include<string.h>
#include<unordered_map>
using namespace std;
void frequency_count(char str[])
{
    unordered_map<string,int> mp;
    char* token;
    token=strtok(str," ");
    while(token!=NULL)
    {
        mp[token]++;
        token=strtok(NULL," ");
    }

    for(auto x: mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main()
{
   //int a[]={1,2,2,3,4,2,5,6,1,7};
   char str[]="rahulluhar is good good rahulluhar";
   //frequency_count(a,10);
   frequency_count(str);
}

