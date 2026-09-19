#include <iostream>
using namespace std;

//class Book {
//	public:
//		string title;
//		string author;
//		int year;
//		
//};
//
//
//int main(){
//	Book my_books;
//	
//	my_books.title = "No Longer Human";
//	my_books.author = "Osamu Dazai";
//	my_books.year = 1948;
//	
//	cout<< my_books.title << " " << my_books.author << " " << my_books.year<< endl;
//	
//	return 0;
//}

class Dog{
	public:
		void bark();
};

void Dog::bark() {
	cout<< "Woof!";
}

int main(){
	Dog idk;    
	idk.bark();  
return 0;
}
