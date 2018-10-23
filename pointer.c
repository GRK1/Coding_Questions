#include<stdio.h>

int main()
{
    int i=100;
    int *ip1,*ip2;
    ip1=&i;
    ip2=++ip1;
    --ip1;
    printf("%u",ip2-ip1);
}
