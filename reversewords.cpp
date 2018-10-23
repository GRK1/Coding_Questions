#include<iostream>
#include<string.h>
#include<stack>

using namespace std;

int main()
{
    stack<string>s;
    char str[] = "i.like.this.program.very.much";

    // Returns first token
    char* token =strtok(str, ".");

    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        s.push(token);
        token = strtok(NULL, ".");
    }
    while(!s.empty())
    {
        cout<<s.top()<<".";
        s.pop();
    }
    return 0;
}

