#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    float price;

    void display() {
        cout << "Title: " << title
             << ", Author: " << author
             << ", Price: $" << price << endl;
    }
};

int main() {
    Book b1, b2;

    b1.title = "C++ Programming";
    b1.author = "Bjarne Stroustrup";
    b1.price = 45.5;

    b2.title = "Data Structures";
    b2.author = "Seymour Lipschutz";
    b2.price = 39.99;

    b1.display();
    b2.display();

    return 0;
}
