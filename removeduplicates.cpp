#include<iostream>
using namespace std;
int main()
{ string s1;
    cout<<"enter string";
    cin>>s1; char new_array[20];
    int array[126]={0};int j=0;
    for(int i=0;i<s1.length();i++)
    {
        array[s1[i]]++;
    }
    for(int i=0;i<s1.length();i++)
    {
        if(array[s1[i]]==1)
        {
            new_array[j]=s1[i];
            j++;
        }

        else if(array[s1[i]]!=0&&array[s1[i]]!=1)
            {
            while(array[s1[i]]!=1)
            {
                array[s1[i]]--;

            }
            array[s1[i]]=0;
            new_array[j]=s1[i];

            j++;
            }
    }

    for(int i=0;i<j;i++)
    {
        cout<<new_array[i];
    }
}
