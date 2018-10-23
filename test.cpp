#include<iostream>
#include<string.h>
#include<stack>

using namespace std;

int main()
{
    stack<string>s;
    int test_case;
    cin>>test_case;
    int count=0;
    while(test_case)
    {
        char str[100];
        cin>>str;

    // Returns first token
    char* token =strtok(str, ".");

    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        s.push(token);
        count++;
        token = strtok(NULL, ".");
    }
    while(!s.empty())
    {
        cout<<s.top();
        if(count!=1)
        cout<<".";
        s.pop();
        count--;
    }

    }
    return 0;
}

