#include <iostream>
using namespace std;

string primenum(int number){
    for(int i = 2; i < number; ++i){
        if(number % i == 0){
            return "not prime";
        }
    }
    return "prime";
}

int main()
{
    int askingnum;
    cin>> askingnum;
    cout<<primenum(askingnum);

    return 0;
}


