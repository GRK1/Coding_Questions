#include<iostream>
using namespace std;
int main()
{ int a[100][100];int n;int m;
    cout<<"enter rows and columns";
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;
  for(int i=0;i<m;i++)
  {
    for(int k=i+1;k<m;k++)
    {
      sum=sum+a[n-1][k];
      //cout<<sum<<endl;
    }
    a[n-1][i]=sum;
    sum=0;
  }

   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }

}
