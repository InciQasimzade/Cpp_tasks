#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

//int main() {
//    try {
//        int number;
//
//        if (!(cin >> number)) {
//            throw runtime_error("Invalid Input");
//        }
//
//        cout << "You entered " << number;
//    }
//    catch (const runtime_error& e) {
//        cout << "NO " << e.what();
//    }
//
//    return 0;
//}

//int main(){
//	try {
//		int number1;
//		int number2;
//		cout<<"Enter 2 numbers: ";
//		cin>>number1>>number2;
//		
//		if (number2 == 0){
//			throw runtime_error ("Not divisible by zero");
//		}
//		
//		cout<<"Equals to: "<<number1 / number2;
//	}
//	catch (const runtime_error& e) {
//		cout<< "no, " << e.what();
//	}
//	
//	return 0;
//}

//int main(){
//	int age;
//	cout<<"Enter an age: ";
//	cin>> age;
//	
//	try{
//		if(age < 0){
//			throw runtime_error("cant be negative");
//		}
//		cout<<"accepted: "<< age;
//	}
//	catch(const runtime_error& e){
//		cout<<"No, "<< e.what();
//	}
//	
//	return 0;
//}

int main(){
	vector<int> array = {3, 56, 24, 63, 98};
	int index;
	cout<<"enter an index: ";
	cin>> index;
	
	try{
		if (index < 0 || index >= array.size()){
			throw runtime_error("Invalid index");
		}
	cout << array[index];
	}
	catch(const runtime_error& e){
		cout<<"No, "<<e.what();
	}
	
	return 0;
}
