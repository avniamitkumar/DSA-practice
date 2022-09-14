#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int roll_no;
    int marksA;
    int marksB;
    int marksC;
public:
    student(string name,int roll_no,int marksA,int marksB,int marksC);
    int total();
    char grade();
};
student::student(string name,int roll_no,int marksA,int marksB,int marksC)
{
    this->name=name;
    this->roll_no=roll_no;
    this->marksA=marksA;
    this->marksB=marksB;
    this->marksC=marksC;
}
int student::total()
{
    return marksA+marksB+marksC;
}
char student::grade()
{
    float avg=total()/3.0;
    if(avg>60)
    {
        return 'A';
    }
    else if(avg>=40 && avg<60)
    {
        return 'B';
    }
    else
    {
        return 'C';
    }
}

int main()
{
    string name;int roll_no;int marksA;int marksB;int marksC;
    cout<<"ENTER NAME"<<endl;
    cin>>name;
    cout<<"ENTER ROLL NO"<<endl;
    cin>>roll_no;
    cout<<"ENTER MARKS OF A,B N C"<<endl;
    cin>>marksA;
    cin>>marksB;
    cin>>marksC;

    student s( name,roll_no,marksA,marksB,marksC);
    cout<<s.total()<<endl;
    cout<<s.grade()<<endl;

    return 0;
}
