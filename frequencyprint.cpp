#include<iostream>
#include<unordered_map>
using namespace std;
void frequency_count(string str)
{
    unordered_map<char,int> mp;
    for(int i=0;i<str.length();i++)
    {
        mp[str[i]]++;
    }
    for(auto x: mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main()
{
   //int a[]={1,2,2,3,4,2,5,6,1,7};
   string str="rahulluhar";
   //frequency_count(a,10);
   frequency_count(str);
}
