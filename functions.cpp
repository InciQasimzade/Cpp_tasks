#include <iostream>
using namespace std;

// void - empty
// you are using void when you don't use return

// return_type function_name(){}

void greeting(){
    cout<<"Hello everyone";
}

string create_fullName(string name, string surname){
    string fullName = name + " " + surname;
    return fullName;
}

string create_fullName(string name){
    string fullName = name + " " + "Qasimzade";
    return fullName;
} 

int main()
{
    cout<<create_fullName("Inci");
    
    return 0;
}
