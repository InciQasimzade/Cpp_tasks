#include <iostream>
using namespace std;

class Employee{
	private:
		string name;
		double salary;
	
	public:	
		void setName(string new_name){
			name = new_name;
		}
		
		void setSalary(double new_salary){
			salary = new_salary;
		}
		
		string getName(){
			return name;
		}
		
		double getSalary(){
			return salary;
		}
};	
class Developer : public Employee{
	public:
		string programmingLanguage;
};
	
class Manager : public Employee{
	public:
		int teamSize;
};
		


int main(){
	Developer dev1;
	dev1.setName("Ahmad");
	dev1.setSalary(29900);
	dev1.programmingLanguage = "C++";
	
	Manager man1;
	man1.setName("Maryam");
	man1.setSalary(22000);
	man1.teamSize = 8;
	
	cout<< dev1.getName()<< ", "<< dev1.getSalary()<<", "<< dev1.programmingLanguage<<endl;
	cout<< man1.getName()<< ", "<< man1.getSalary()<<", "<< man1.teamSize<<endl;
	
	return 0;
}
