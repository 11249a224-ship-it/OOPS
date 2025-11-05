#include<iostream>
using namespace std;
class patient
{
    public:
    int pid;
    string name;
    string disease;
     patient(int i,string n,string d)
     {
        pid=i;
        name=n;
        disease=d;
     }
     void showpatient();
};
void patient :: showpatient()
      {
        cout<<"PID: "<<pid<<
        ",NAME: "<<name<<
        ",DISEASE: "<< disease<<endl;
      }
      int main()
      {
        patient p1(101,"deepu","viral fever");
        patient p2(102,"ram","dengue");
        p1.showpatient();
        p2.showpatient();
        return 0;
      }
      