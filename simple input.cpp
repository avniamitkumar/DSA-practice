#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cin>>n;
    while(true)
    {
        //cin>>n;
        sum=sum+n;
		if(sum>=0){
        cout<<n<<endl;}
        if(sum<0)
        {
            return 0;
        }
        cin>>n;
    }

}
