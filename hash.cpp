#include<iostream>
#include<unordered_map>
#include<string.h>
using namespace std;
int main()
{
    unordered_map<string,int> map;
    char s[]="MY NAME IS is IS RAHUL KHANDELWAL";
    char* p=strtok(s," ");
    while(p!='\0')
    {
        if(map.count(p)==0)
        {
            map[p]=1;
        }
        else
        {
            map[p]++;
        }
        p=strtok(NULL," ");

    }
    for(unordered_map<string,int>::iterator q=map.begin();q!=map.end();q++)
    {
        cout<<q->first<<" "<<q->second<<endl;
    }
}
