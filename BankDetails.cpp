#include<iostream>
using namespace std;
class account
{
    public:
    int acno;
    string name;
    float bal;
    account(int a,string n,float b)
    {
        acno=a;
        name=n;
        bal=b;
    }
    void display()
    {
        cout<<"AccNum:"<<acno
        <<",AccName:"<<name
        <<",Balance:"<<bal<<endl;
    }
};
int main()
{
    account a1(15,"sree",20009);
    account a2(18,"deepu",10009);
    a1.display();
    a2.display();
    return 0;
}