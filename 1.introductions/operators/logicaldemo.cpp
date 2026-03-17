#include<iostream>
using namespace std; 
int main(){
    system("clear"); 

    int age  = 10; 
    int grade = 10; 

    // age>=18  AND grade=12 
    if( age>=18 && grade==12  ){
        cout<<"AND-> you can apply scholarship!"<<endl; 
    }else{
        cout<<" AND-> you cannot apply!"<<endl; 
    }

    if(age>=18 || grade==12){
        cout<<"OR-> you can apply "<<endl; 
    }else {
        cout <<"OR-> you cannot apply "<<endl; 
    }
    return 0 ; 
}