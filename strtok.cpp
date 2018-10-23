#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[] = "Welcome to India";

    // Returns first token
    char* token =strtok(str, " ");

    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL, " ");
    }

    return 0;
}
