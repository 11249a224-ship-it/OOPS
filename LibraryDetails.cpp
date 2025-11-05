#include<iostream>
using namespace std;
class book
{
    public:
    string title;
    string author;
    float price;
     book(string t,string a,float p)
     {
        title=t;
        author=a;
        price=p;
     }
     void display()
     {
        cout<<"TITTLE: "<<title<<
        " AUTHOR: "<<author<<
        " PRICE: "<<price<<endl;
     }
};
int main()
{
    book b1("C++ pro","stroustrup",500.06);
    book b2("DSA","mark allen",650.09);
    cout<<"BOOK DETAILS: \n";
    b1.display();
    b2.display();
    return 0;
}