#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s[100];
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}
	sort(s,s+n);
	cout<<"After Sorting"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}

	return 0;
}