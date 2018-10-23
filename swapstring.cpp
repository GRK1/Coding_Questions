#include<iostream>
using namespace std;
void swap(char **str1,char** str2)
{
    char *temp=*str1;
    *str1=*str2;
    *str2=temp;
}
int main()
{
    char * str1="rahul";
    char* str2="khandelwal";
    swap(&str1,&str2);
    cout<<str1;
}
