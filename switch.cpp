#include <iostream>
using namespace std;

int main(){
	
	int asking_num;
	cout<<"Enter a number"<<endl;
	cin>> asking_num;
		
//	if(asking_num == 1){
//		cout<<"Monday \n";
//	} else if(asking_num == 2){
//		cout<<"Tuesday \n";
//	} else if(asking_num == 3){
//		cout<<"Wednesday\n";
//	}else{
//		cout<<"Weekend \n";
//	}

	switch (asking_num){
		case 1:
			cout<<"Monday \n";
			break;
		case 2:
			cout<<"Tuesday \n";
			break;
		case 3:
			cout<<"Wednesday\n";
			break;
		
		default:
			cout<<"Weekend \n";
			break;
		
	}

		
	return 0;
}
