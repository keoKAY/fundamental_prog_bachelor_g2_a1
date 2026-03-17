#include<iostream>
using namespace std; 
// scholarship program 
int main(){
    system("clear"); 

    int grade=12; 
    char gender='M';

    // if(grade==12 && gender=='F' )

    // nested if 
    if(grade==12){
        if(gender=='F'){
            cout<<" ✅ You are able to apply scholarship!"
            <<endl; 
        }else{
            cout<<"You are male , you cannot apply!! ❌"
            <<endl; 
        }
    }else{
        cout<<" ❌ You cannot apply for the scholarship"
        <<endl; 
    }

    return 0; 
}