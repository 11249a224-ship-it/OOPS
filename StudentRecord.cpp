#include<iostream>
using namespace std;
class student 
{
    public:
    int rno,marks;
    string name;
    student(int r,string n,int m)
    {
        rno=r;
        name=n;
        marks =m;
    }

    void display()
    {
        cout<<"Roll num:"<<rno
        <<",Name:"<<name
        <<",Marks:"<<marks<<endl;
    }
};
int main()
{
student s1(224,"sree",90);
student s2(265,"ujju",90);
student s3(123,"henny",90);
s1.display();
s2.display();
s3.display();
return 0;
}
