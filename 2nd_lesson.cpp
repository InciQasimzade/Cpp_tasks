#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin>>x>>y;
    
    if (x > y){
        cout<<"x is biggest";
    } else if ( y > x){
        cout<<"y is biggest";
    } else{
        cout<<"tie";
    }
    
    int x;
    cin>> x;
    
    if ( x % 2 == 0){
        cout<<" x is even";
    }else{
        cout<<"x is odd";
    } 
    
    if ( x % 400 == 0 || x % 4 == 0 && x % 100 != 0){
        cout<< "it is a leap year";
    } else{
        cout<< "no.";
    }
    
    int age;
    cout<<"enter yo age: ";
    cin>>age;
    bool membership;
    cout<<"do you have membership ";
    cin>> membership;
    
    if (age > 18 && membership == true){
        cout<< "accepted";
    } else{
        cout<< "not accepted";
    }
    
    string player1, player2;
    cin>> player1 >> player2;
    
    if (player1 == "rock" && player2 == "scissors" || player1 == "scissors" && player2 == "paper" || player1 == "paper" && player2 == "rock"){
        cout<<"player 1 wins";
    } else if (player1 == "scissors" && player2 == "rock" || player1 == "paper" && player2 == "scissors" || player1 == "rock" && player2 == "paper"){
        cout<<"player2 wins";
    } else{
        cout<< "tie";
    }
    return 0;
}
