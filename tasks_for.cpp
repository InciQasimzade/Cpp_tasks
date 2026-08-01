#include <iostream>
using namespace std;

int main()
{
    // int num;
    // cin>>num;
    
    // for(int i = 2; i < num; ++i){
    //     if(num % i == 0){
    //         cout<<"composite";
    //         break;
    //     }
    // }
    // int x =1, y= 1;
    // for(int i = 0; i < num; ++i){
    //     int temp = y ;
    //     y += x;
    //     x = temp;
    // }
    // cout << x;
    
    string sentence;
    getline(cin, sentence);
    int total = 0;
    
    for(char letter : sentence){
        if(letter =='i'){
            total += 1;
        }
    } cout<<total;
    
    return 0;
}
