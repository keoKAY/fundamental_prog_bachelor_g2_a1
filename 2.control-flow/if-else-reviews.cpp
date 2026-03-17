#include<iostream>
using namespace std; 

int main(){
    system("clear"); 

    // variables needed for the program. 
    string name; 
    char gender; 
    float hours, wage , bonus=0, salary=0, total=0; 

    // input 
    cout<<"---------[Salary Finder V2]----------"<<endl; 
    cout<<"Enter your name: "; getline(cin,name); 
    cout<<"Enter gender: "; cin>>gender; 
    cout<<"Enter hours(hrs): "; cin>>hours; 
    cout<<"Enter wage($): "; cin>>wage; 

    // process 
    salary = hours * wage; 
    if(hours>=100){
        if(gender=='F'|| gender=='f') bonus=0.5; 
        else bonus= 0.4; 
    }
    total = salary + (salary*bonus); 
    
    // output 
    cout<<"\n ==============[Salary Output]============="<<endl; 
    cout<<"Worker name: "<<name<<endl; 
    cout<<"Gender: "<<gender<<endl; 
    cout<<"Bonus: "<<(bonus*100)<<"%"<<endl; 
    cout<<"Original Salary: "<<salary<<"$"<<endl; 
    cout<<"Total Salary: "<<total<<"$"<<endl; 
    return 0 ; 
}