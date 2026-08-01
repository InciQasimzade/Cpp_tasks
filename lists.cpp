#include <iostream>
using namespace std;


int main()
{
    string cars[5];
    cars[0] = "BMW";
    cout<<cars[0]<<cars[1];
    
    string names[] = {"Inci", "Shamil", "Qabil"};
    
    int length = sizeof(names) / sizeof(names[0]);
    for(string name: names) {
        cout<<name<<" ";
    }
    
    int numbers[2][2] = {
        {1, 3},
        {4, 5}
    };
    
    cout<<numbers[1][0]<<" ";
    
    int numbers2[2][3][2] = {
        {{1, 2}, {3, 4}, {5, 6}},
        {{7, 8}, {9, 10}, {11, 12}}
    };
    
    
    return 0;
}
