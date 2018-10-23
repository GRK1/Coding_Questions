#include <iostream>
using namespace std;

int main() {
	//code
	int test_case;
	cin>>test_case;
	while(test_case)
	{
	    int flag=1;
	    string  str1,str2;
	    cin>>str1;
	    cin>>str2;
	    int count[256]={0};
	    for(int i=0;i<str1.length();i++)
	    {
	        count[str1[i]]++;
	    }
	    for(int i=0;i<str2.length();i++)
	    {
	        count[str2[i]]--;
	    }
	    for(int i=0;i<str1.length();i++)
	    {
	        if(count[str1[i]]!=0)
	        {
	            cout<<"NO";
	            flag=0;
	            break;

	        }
	    }
	    if(flag==1)
	    cout<<"YES";
	    test_case--;

	}
	return 0;
}
