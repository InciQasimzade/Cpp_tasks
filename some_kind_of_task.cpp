#include <iostream>
#include <vector>
using namespace std;


bool findNumber(vector<int> numbers, int target){
	bool isExists = false;
	for(int i = 0; i < numbers.size(); ++i){
		if (target == numbers[i]){
			isExists = true;
		}
		
	}
	
	return isExists;
}

int main(){
	vector<int> numbers = {2, 56, 26, 98};
	int target = 50;
	cout<< findNumber(numbers, target);
	return 0;
}
