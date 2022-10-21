#include<iostream>
using namespace std;
void removeduplicates(char a[])
{
	int i=0;
	int j=i+1;
	while(j<strlen(a))
	{
		if(a[i]!=a[j])
		{
		   i++;
		   a[i]=a[j];
		}
		j++;
	}
	a[i+1]='\0';
	return;
}

int main()
{
	char a[100000]="codddinng";
	cout<<a<<endl;
	//AFTER REMOVING DUPLICATES
	removeduplicates(a);
	cout<<a<<endl;
	return 0;
}