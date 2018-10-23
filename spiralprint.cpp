#include<iostream>
using namespace std;
void spiralPrint(int input[][100], int row, int col){
	/* Don't write main().
	* Don't read input, it is passed as function argument.
	* Print output and don't return it.
	* Taking input is handled automatically.*/
    int lastcol=col-1;
    int lastrow=row-1;
    int r=0;int c=0;int i=0;
    while(r<=lastrow&&c<=lastcol)
    {
    for(i=c;i<=lastcol;i++)
    {
    cout<<input[r][i]<<" ";
    }
    r++;
     for(i=r;i<=lastrow;i++)
    {
    cout<<input[i][lastcol]<<" ";
    }
    lastcol--;
    if(r<=lastrow)
    {
     for(i=lastcol;i>=c;i--)
    {
    cout<<input[lastrow][i]<<" ";
    }
    lastrow--;
    }
    if(c<=lastcol)
    {
     for(i=lastrow;i>=r;i--)
    {
    cout<<input[i][c]<<" ";
    }
    c++;
    }
    }


}
int main()
{int r;int c;
    int a[100][100];
    cout<<"enter no of rows and columns respectively";
   cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    spiralPrint(a,r,c);
}
