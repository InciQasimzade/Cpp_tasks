#include <iostream>
using namespace std;

string odd_or_even(int number){
    if (number % 2 == 0){
        return "it is even";
    }
    return "it is odd";
}

int main()
{
    int asking;
    cout<<"number: ";
    cin>>asking;

    cout<<odd_or_even(asking);
  
    return 0;
}
