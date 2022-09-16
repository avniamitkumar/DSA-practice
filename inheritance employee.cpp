#include <iostream>
using namespace std;
class emp
{
private:
    string name;
    int empid;
public:
    emp(int id,string n)
    {
        name=n;
        empid=id;
    }
    int getid()
    {
        return empid;
    }
    string getn()
    {
        return name;
    }
};
class full:public emp
{
private:
    int sal;
public:
    full(int id,string n,int s):emp(id,n)
    {
        sal=s;
    }
    int getsa()
    {
        return sal;
    }

};

class part:public emp
{
private:
    int wage;
public:
    part(int id,string n,int w):emp(id,n)
    {
        wage=w;
    }
    int getw()
    {
        return wage;
    }

};

int main()
{
part p1(1,"John",300);
full p2(2,"Raj",5000);
cout<<"Salary of "<<p2.getn()<<" is "<<p2.getsa()<<endl;
cout<<"Daily wage of "<<p1.getn()<<" is "<<p1.getw()<<endl;
    return 0;
}
