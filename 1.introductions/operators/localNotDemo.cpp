#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    // Logical Not (!)
    bool isValid = true; 
    cout<<"Result 1: "<<isValid<<endl; 
    cout<<"Result 2: "<<(!isValid)<<endl;

    int a=10 , b=50 ; 
    if( !(a>b)  ){
        cout<<" A is less than B  "<<endl; 
    }else {
        cout<<" A is greater than B "<<endl; 
    }
    return 0; 
}