#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int val=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<val;
		val?val=0:val=1;
		}
		cout<<endl;
		
	}
	return 0;
}
