#include <iostream>
#include<algorithm>
using namespace std;

int main() {
string s1="geeksforgeeks";
s1.erase(remove(s1.begin(),s1.end(),'e'),s1.end());
cout<<s1;


}
