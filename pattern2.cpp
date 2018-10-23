#include<iostream>
using namespace std;
int main()
{
    int row=1;int col;int value=1;
    while(row<=5)
    {
        col=1;
        while(col<=(5-row+1))
        {
          cout<<value;
          value++;
          col++;
        }
        value=1;
        cout<<endl;
        row++;
    }
}


