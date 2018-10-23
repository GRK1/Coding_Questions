#include<iostream>
using namespace std;
int main()
{
    int row=1;int col;int space;
    while(row<=5)
    {
        int space=1;
        while(space<=(5-row))
        {
            cout<<" ";
            space++;
        }
        col=1;
        while(col<=row)
        {
            if(col==1||col==row)
            {
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
           col++;
        }
        cout<<endl;
        row++;
    }
}
