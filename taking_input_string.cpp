#include <iostream>
using namespace std;
void readline(char a[],int delimiter)
{
	int i=0;
	char ch=cin.get();
	while(ch!=delimiter)
	{
		a[i]=ch;
		ch=cin.get();
		i++;
	}
	a[i]='\0';
}

int main()
{
	char a[10000];

	readline(a,'#');
	cout<<a<<endl;
	return 0;
}