#include <iostream>
using namespace std;

struct myBooks {
    string book_title;
    string book_author;
    int publ_year;
};

int main()
{
    myBooks book1;
    cout<<"Gimme the book name: ";
    getline(cin, book1.book_title);
    
    cout<<"Who is the author of it: ";
    getline(cin, book1.book_author);
    
    cout<<"What is publication year: ";
    cin>>book1.publ_year;
    
    cout<< "Title: "<<book1.book_title<<endl<<"Author: "<<book1.book_author<<endl<<"Publication year: "<<book1.publ_year;

    return 0;
}
