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
    
    // int option; 
    // cout<< "How many elements do you want: ";
    // cin>> option;
    
    // string names[option];
    // int ages[option];
    
    // string name;
    // int age;
    
    // for (int i = 0; i < option; i++){
    //     cout<<"Name: ";
    //     cin>>name;
    //     cout<<"Age: ";
    //     cin>>age;
        
        
    //     names[i] = name;
    //     ages[i] = age;
    // }
    
    // for(string allnames : names){
    //     cout<< allnames << " ";
    // }
    // for(int nums : ages){
    //     cout<< nums << " ";
    // }
    
    // int numbers[3] = {23, 15, 56};
    // int total = 0;
    // for(int i = 0; i< 3; i++){
    //     if(numbers[i] % 2 == 1){
    //         total+= numbers[i];
            
    //     }
    // } 
    // cout<<total;
    
    
    // string words[3] = {"alma", "armud", "banana"};
    // for(int i = 0; i < 3; i++){
    //     if(words[i][0] == 'a'){
    //         cout<<words[i]<<" ";
    //     }
    // }
    

    return 0;
}
