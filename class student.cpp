#include <iostream>
using namespace std;
class student
{
    public:
        int roll_no;
        string name;
        int marks;

        void add()
        {
            cout<<"ENTER ROLL NUMBER OF STUDENT"<<endl;
            cin>>roll_no;
            cout<<"ENTER THE NAME OF STUDENT"<<endl;
            cin>>name;
            cout<<"ENTER MARKS OUT OF 100"<<endl;
            cin>>marks;
        }

        void display()
        {
            cout<<"NAME IS :"<<name<<endl;
            cout<<"ROLL NO IS :"<<roll_no<<endl;
            cout<<"MARKS ARE :"<<marks<<endl;
        }

};

int main()
{
    class student s1;
    s1.add();
    s1.display();

    return 0;
}
