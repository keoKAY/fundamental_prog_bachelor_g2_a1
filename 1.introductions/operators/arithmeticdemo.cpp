#include<iostream>
using namespace std; 

int main(){
    system("clear"); 

    // Arithmetic operators 
    // + , - , * , /, % 

    int a ; 
    int b ;

    // cout<<".......Calculating numbers....... "<<endl; 
    // cout<<"Enter a :"; cin>>a; 
    // cout<<"Enter b : "; cin>>b; 
    
    a = 10; 
    b = 2; 
    int result = a - b; 
    cout<<"Sub is : "<<result<<endl; 

    result = a + b; 
    cout<<"Sum is : "<<result<<endl; 

    result = a / b; 
    cout<<"Div is : "<<result <<endl; 

    result = a * b; 
    cout<<"Mul is "<<result<<endl; 

    result = a % b; 
    cout<<"Modulo is : "<<result<<endl; 

    return 0 ; 
}