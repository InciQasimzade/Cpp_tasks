#include <iostream> // input - output - stream
using namespace std 

/*
    bool = true , false -> 1 byte
    int = 5, 10 -> 2 or 4 bytes
    float = 4.12 -> 4 bytes
    double = 4.34567245 -> 8 bytes
    char = 'h' -> 1 bytes
    
    string = 6 or 8 bytes
*/
int main(){
    // cout<< "HEllo Everyone"<< " "<< 5<< endl; // endl == "\n"
    // cout<<"sdfg";
    bool inVerified = true;
    int x = 1;
    long double name = 23.33;
    
    cout<< typeid(x).name()<<endl;
    cout<< sizeof(name);
    
    int number = 64;
    cout<<number;
    
    int age;
    age = 32;
    
    int total = 79, totalMax = 74;
    
    const int number2 = 98;
    cout<<number2;
    number2 =75;
    
    char number;
    
    cout<<"Enter a number: ";
    cin>> number;
    cout<<number;
    
    return 0;
    
}
