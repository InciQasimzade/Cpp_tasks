#include <iostream>
using namespace std;

//void swapNumbers(int &a, int &b){
//	int num = a;
//	a = b; 
//	b = num;
//	
//}
//
//int main(){
//	int x = 5;
//	int y = 10;
//	
//	swapNumbers(x , y);
//	
//	cout<<x;
//	cout<<y;
//	
//	
//	return 0;
//}

//void doubleNumber(int &number){
//	number = number * 2;
//	
//}
//
//int main(){
//	
//	int x = 10;
//	
//	doubleNumber(x);
//	
//	cout<< x;
//	
//	return 0;
//}

//int findMax(int *a, int *b){
//	if(*a > *b){
//		return *a;
//	}else{
//		return *b;
//	}
//
//}
//
//int main (){
//	
//	int x = 367;
//	int y = 34564;
//	
//	cout<< findMax(&x, &y);
//	
//	return 0;
//}

//void increaseValues(int *arr, int size){
//	for (int i = 0; i < size; i++){
//		*(arr + i) = *(arr + i) + 5;
//	}
//}
//
//int main(){
//	
//	int numbers[] = {2, 5, 3, 7}; 
//	
//	increaseValues(numbers, 4);
//	for (int i = 0; i < 4; i++ ){
//		cout<< numbers[i]<< endl;
//	}
//	
//	return 0;
//}

//int main (){
//	
//	int arr[] = {5, 23, 43, 453, 32895};
//	int* pointer = arr;
//	
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	
//	for(int i = 0; i < size; i++){
//		cout<< pointer<< endl;
//	}
//	
//	return 0;
//}


//int countPositive(int *arr, int size) {
//    int count = 0;
//
//    for (int i = 0; i < size; i++) {
//        if (*(arr + i) > 0) {
//            count++;
//        }
//    }
//
//    return count;
//}
//
//int main() {
//    int arr[] = {5, -2, 8, -1, 10};
//
//    cout << countPositive(arr, 5);
//
//    return 0;
//}

int main(){
	
	int n;
	cout<< "How many students do you have: "<< endl;
	cin>> n;
	
	int* grades = new int[n];
	int sum = 0;

	for(int i = 0; i< n ; i++){
		cout<< "tell me the grades: "<< endl;
		cin>> grades[i];
		
		sum += grades[i];
	}
	
	int average = sum / n;
	
	cout<< "Average is: "<< average << endl;
	
	
	return 0;
}
