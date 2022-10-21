#include <iostream>
using namespace std;
int main()
{
	int n=6;
	char a[]="abcba";
	int freq[26]={0};
	for(int i=0;i<n;i++)
	{
		freq[a[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(freq[i]>0){
		char x=i+'a';
		cout<<x<<" "<<freq[i]<<" times "<<endl;
	}}


	return 0;
}