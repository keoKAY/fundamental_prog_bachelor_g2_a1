#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    // input 
    string name; 
    char gender; 
    float hours, wage, salary=0,tax=0; 

    cout<<"-----------------<<Worker Program>>----------"<<endl; 
    cout<<"Enter Worker name: "; cin>>name; 
    cout<<"Enter worker gender: "; cin>>gender; 
    cout<<"Enter hours: "; cin>>hours; 
    cout<<"Enter wage($): "; cin>>wage;
    
    // process 
    float originalSalary = hours * wage; 
    if(originalSalary >=1000){
        if(gender=='m' || gender=='M') tax = 0.5; 
        else tax = 0.3;    
    }
    salary = originalSalary * (1 - tax);         
    // finding the remaining salary after taxed 

    // output the info 
    cout<<"\n -------------------<<Output Worker>>---------------"<<endl; 
    cout<<"Worker Name: "<<name<<endl; 
    cout<<"Gender: "<<gender<<endl; 
    cout<<"Original Salary: "<<originalSalary<<"$"<<endl; 
    cout<<"Tax: "<<(tax*100)<<"%"<<endl; 
    cout<<"Remaining Salary: "<<salary<<"$"<<endl; 
    return 0 ; 
}