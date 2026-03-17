#include<iostream>
using namespace std;


struct Worker{
    // data member 
    string name,gender; 
    float hours,wage;
    
    // default constructor 
    // provide default value for the instance
    Worker(){
        name="anonymous"; 
        gender="unknown"; 
        hours=0; 
        wage=0; 
    }
    float findSalary(){
        return hours * wage; 
    }
    // function member 
    void input(){
        cout<<"Enter worker name: "; 
        getline(cin,name); 
        cout<<"Enter worker gender: "; 
        getline(cin,gender); 
        cout<<"Enter hours(hrs): "; 
        cin>>hours; 
        cout<<"Enter wage ($): "; 
        cin>>wage; 
        }
    void output(){
        cout<<"\n------------[Output]-----------"<<endl; 
        cout<<"Name: "<<name<<endl; 
        cout<<"Gender: "<<gender<<endl;
        cout<<"Hours, Wage : "
            <<hours<<","<<wage<<endl; 
        cout<<"Salary: "<<findSalary()<<"$"<<endl; 
        }
}; 
int main(){
    system("clear"); 
    Worker worker1;

    worker1.input(); 
    worker1.output(); 
    return 0 ; 
}