#include <iostream>
#include <vector>
using namespace std;

struct employees{
	string name;
	int salary;
	string dep;
};

int main(){
	vector<employees> myEmp;
	
	for (int i = 0; i < 5; ++i){
		employees emp;
		cout<<"Tell me your name: ";
		cin>> emp.name;
		
		cout<<"Tell me your salary: ";
		cin>> emp.salary;
		
		cout<<"Which department: ";
		cin>> emp.dep;
		
		myEmp.push_back(emp);
	}

	for (employees emp : myEmp){
		cout<<emp.name<<endl<<emp.salary<<endl<<emp.dep;
	}
		
	
	return 0;
}
