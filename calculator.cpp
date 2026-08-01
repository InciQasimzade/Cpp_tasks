#include <iostream>
using namespace std;

float addition(float number1, float number2){
    return number1 + number2;
}

float subtraction(float number1, float number2){
    return number1 - number2;
}

float multiplication(float number1, float number2){
    return number1 * number2;
}

float division(float number1, float number2){
    return number1 / number2;
}

int main()
{
    float asking1, asking2;
    char operator_;

    cout<<"Number 1: ";
    cin>>asking1;

    cout<<"Number 2: ";
    cin>>asking2;
    
    cout<< "operator: ";
    cin>>operator_;
    
    if (operator_ == '+'){
        cout<< addition(asking1, asking2);
    }
    
    if(operator_ == '-'){
        cout<< subtraction(asking1, asking2);
    }
    
    if(operator_ == '*'){
        cout<< multiplication(asking1, asking2);
    }

    if(operator_ == '/'){
        cout<< division(asking1, asking2);
    }

    return 0;
}
