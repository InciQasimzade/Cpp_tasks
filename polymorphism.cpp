#include <iostream>
using namespace std;

class Area{
	public:
		void area(){
			cout<<"area of each figure";
		}
};

class square: public Area{
	public:
		int area(int side){
			return side * side;
		}
};

class rectangular: public Area{
	public:
		int area(int width, int length){
			return width*length;
		}
};

class circle: public Area{
	public:
		double area(int radius){
			return 3.14 * radius * radius;
		}
};

int main(){
	square my_square;
	rectangular my_rec;
	circle my_circ;
	
	cout<< "Square: " << my_square.area(4)<<endl;
	cout<< "Rectangular: " << my_rec.area(2, 4)<<endl;
	cout<< "Circle: " << my_circ.area(4)<<endl;
	
	return 0;
}
