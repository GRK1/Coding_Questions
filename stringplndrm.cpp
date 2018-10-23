#include <iostream>
using namespace std;

int main() {
	//code
	int test_cases,n;
	string s1;
	cin>>test_cases;
	while(test_cases!=0)
	{
	   cin>>n;
	   cin>>s1;
	   int length=s1.length();
	   for(int i=0;i<s1.length();i++)
	   {
	       if(s1[i]!=s1[length-1])
	       {
	           cout<<"No";
	           return 0;
	       }
	       else
	       {
	           length--;
	       }
	   }
	   cout<<"Yes";
	   test_cases--;
	}
	return 0;
}
