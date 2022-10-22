#include <iostream>
#include <string>
using namespace std;
int main()
{

	//INITIALISATION
	string s="hello";
	cout<<s<<endl;
	for(int i=0;i<s.length();i++)
	{
		cout<<s[i]<< " ";
	}
	cout<<endl;
	//SECOND WAY
	string s2=s;
	cout<<s2<<endl;
	//THIRD WAY
	string s3(s2);
	cout<<s3<<endl;
	//using character arrays
	char a[]="avni";
	string s4(a);
	cout<<s4<<endl;
	//update the string
	s="I AM LEARNING STRING UPDATE";
	//CONCATENATION OF STRING
	string x="hello";
	string u=" gies";
	x=x+u;
	cout<<x<<endl;;
	cout<<s<<endl;
	//FIND A PARTICULAR WORD INSIDE STRING
	s="I am learning string ";
	strinf word ="learning";
	cout<<"learing is present at ">>s.find(word)<<endl;
	//I WANT TO ERASE/DELETE A WORD
	int indx=s.find(word);
	s.erase(indx,word.length());
	cout<<s<<endl;


	return 0;
}