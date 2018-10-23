#include<iostream>
using namespace std;
int main()
{
    cout<<"1"<<endl;
    int row=2;int col;
    while(row<=5)
    {
        col=1;
        while(col<=row)
        {
            if(row==col||col==1)
            {
                cout<<"1";
            }
            else
            {
                cout<<"2";
            }
            col++;
        }
        cout<<endl;
        row++;
    }
}
