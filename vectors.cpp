#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<string> names;
    
    string name1 = "Inci";
    names.push_back(name1); //to add the variable to the vector
    
    string name2 = "Shamil";
    names.push_back(name2);
    names.pop_back(); // to delete the var in the vector
    
    cout<<names.size()<<endl; // to know the number of elements in a vector
    
    return 0;
}
