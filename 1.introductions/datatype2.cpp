
#include <iostream>
using namespace std;
int main()
{
    system("clear");

    int age = 34;
    short age2 = 12;
    bool isValid = true; 
    const float RATE = 4000; 
   

    cout << "Size of age : "
         << sizeof(age)
         << "bytes" << endl;
    cout << "Size of age2:  "
         << sizeof(age2)
         << "bytes"
         << endl;
    cout<<"Size of isValid: "
        <<sizeof(isValid)<<"bytes"
        <<endl; 
    return 0;
}