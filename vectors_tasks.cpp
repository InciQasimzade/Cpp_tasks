#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> names;
    vector<int> ages;
    
    int option; 
    cout<<"How many options do you want: ";
    cin>> option;
    
    for(int i = 0; i< option; i++){
        string name;
        cout<<"Gimme name: ";
        cin>> name;
        names.push_back(name);
        
        
        int age;
        cout<<"Gimme age: ";
        cin>> age;
        ages.push_back(age);
        
        cout<<names[i]<<" ";
        cout<<ages[i]<<" ";
    }


    return 0;
}
