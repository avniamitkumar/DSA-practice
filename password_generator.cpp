#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <cstring>
using namespace std;

void randompass()
{
	char A_alpha[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char a_alpha[]="abcdefghijklmnopqrstuvwxyz";
	char digits[]="0123456789";
	char spec[]="!@#$%&*()?";
	int a=strlen(A_alpha);
	int b=strlen(a_alpha);
	int c=strlen(digits);
	int d=strlen(spec);
	srand(time(NULL)); 
	int randomno=0;
	randomno = rand() % 4;
	cout<<"Enter the required length of the password:: "<<endl;
	int len;
	cin>>len;
	char password[len+1];
	for(int i=0;i<len;i++)
	{
		if(randomno==0)
		{
			password[i]=A_alpha[rand()%a];
		}
		else if(randomno==1)
		{
			password[i]=a_alpha[rand()%b];
		}
		else if(randomno==2)
		{
			password[i]=digits[rand()%c];
		}
		else
		{
			password[i]=spec[rand()%d];
		}
		randomno= rand() % 4;
	}
	cout<<"Your generated password is "<<endl;
	cout<<password<<endl;
}


int main()
{
	
	randompass();

}