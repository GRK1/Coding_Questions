#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
void occurence(string str)
{
    unordered_map<string,int> count;

    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++;
    }
    for(const auto kvp : count) {
        cout << kvp.first << " occurs " << kvp.second << " times\n";
    }
}
int main()
{ string str;
    cin>>str;
    occurence(str);
}
