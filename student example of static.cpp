#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int rno;
    static int admin;
    student(string name)
    {
        this->name=name;
        admin++;
        rno=admin;
    }
    void display()
    {
        cout<<"Name "<<name<<" ROLL NO "<<rno<<endl;
    }
};
int student::admin=0;
int main()
{
    student s1("RAM");
    student s2("SHYAM");
    student s3("BALRAM");
    student s4("AKRAM");
    student s5("VIKRAM");
    student s6("RAMA");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    s6.display();
    return 0;
}
