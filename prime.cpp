#include <iostream>
using namespace std;

int main() {


 // your code here
 int testcase,a,b,c=1;
	cin>>testcase;
	for(int l=0;l<testcase;l++)
	{
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		for(int j=2;j<=i/2;j++)
		{
		 if(i%j==0)
		 {  c=0;

		 }


	    }

	    if(c==1)
	    cout<<i;
	    c=1;

    }
	}
	return 0;
}
