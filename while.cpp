#include <iostream>
using namespace std;

int main()
{
    int i = 3;
    while (i < 10){
        i += 1;
        if(i % 2 == 1){
            cout<< i<< endl;
        }
    }
    
    return 0;
}
