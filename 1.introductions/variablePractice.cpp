#include<iostream> 
using namespace std; 
int main(){
    system("clear"); //cls
    // Declare variables 
    // syntax = 
    // datatype name;
    string studentName; 
    char gender; 
    float engScore; 
    float mathScore; 
    float cppScore; 
    float avg; 

    cout<<" ====== Input Student Info ====== "<<endl; 
    cout<<"Enter Name: "; //cin>>studentName; 
    getline(cin,studentName); 
    
    cout<<"Enter gender: "; cin>>gender; 
    cout<<"Eng Score: "; cin>>engScore; 
    cout<<"Math Score: "; cin>>mathScore; 
    cout<<"C++ Score: "; cin>>cppScore;   
    avg= (engScore+mathScore+cppScore) / 3; 

    cout<<"==========Student Result =========="<<endl; 
    cout<<"Student Name: "<<studentName<<endl;
    cout<<"Student Gender:"<<gender<<endl;
    cout<<"ENG MATH C++ : "
        <<engScore<<" "
        <<mathScore<<" "
        <<cppScore<<endl;  
    cout<<"Average Score: "<<avg<<endl; 
    return 0 ; 
}