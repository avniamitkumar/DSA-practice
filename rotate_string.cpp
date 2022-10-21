#include <iostream>
using namespace std;
void rotate(char a[],int n)
{
	int i=0;
	int j=strlen(a),len=strlen(a);
	int m=j-1;
	while(m>=0)
	{
		a[m+n]=a[m];
		m--;
	}
	while(i<n)
	{
		a[i]=a[j];
		i++;
		j++;
	}
	a[len]='\0';
	cout<<a<<endl;

}

int main()
{
	char a[10000];
	cin>>a;
	cout<<a<<endl;
	int n;
	cin>>n;
	rotate(a,n);
	return 0;
}