#include <iostream>
using namespace std;

int main()
{
    // string sentence;
    // getline(cin, sentence);
    // cout <<sentence;
    
    string sentence = "My name is Shamil";
    cout<< sentence.length()<< endl;
    cout<< sentence.size()<< endl;
    
    cout<<sentence[3];
    cout<< sentence[sentence.length() - 1];
    
    sentence[sentence.length() - 6] = 's';
    cout<< sentence;
    
    return 0;
}
