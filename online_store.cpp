#include <iostream>
using namespace std;

class Product{
	private:
		string name;
		double price;
		int stock = 5;
	
	public:
		string set_name(string newname){
			name = newname;
		}
		
		double setPrice(double newprice){
			price = newprice;
		}
		
		string get_name(){
			return name;
		}
		
		double get_price(){
			return price;
		}
		
		int get_stock(){
			return stock;
		}
		
		bool buy(int quantity){
			if (stock > quantity && stock > 0){
				stock -= quantity;
				return true;			
			}
			return false;
		}
		
		bool addStock(int quantity){
			if(quantity > 0){
				stock += quantity;
				return true;
			}
			return false;
		}
};

class Laptop : public Product{
	public:
		int ram;
};

class Smartphone : public Product{
	public:
		int storage;
};

int main(){
	
	Laptop lap1;
	lap1.set_name("Lenovo");
	lap1.setPrice(2500.57);
	lap1.ram = 16;
	
	cout<< "Name: "<< lap1.get_name()<<endl<< "Price: "<< lap1.get_price() << endl<< "RAM: "<< lap1.ram<<endl<< "Stock: "<<lap1.get_stock()<<endl;
	
	return 0;
}
