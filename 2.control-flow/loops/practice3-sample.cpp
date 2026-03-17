#include<iostream>
using namespace std; 

void salaryFinder(){
   float wage,hours,salary=0; 
                string name; 
                char gender; 
                cout<<"----------<<Salary Finder>>--------"<<endl; 

                cout<<"Enter name:"; cin>>name; 
                cout<<"Enter gender: "; cin>>gender; 
                cout<<"Enter hours: "; cin>>hours; 
                cout<<"Enter wages: "; cin>>wage; 
                salary = hours * wage; 
                cout<<"\n----------[OUTPUT]-------------"<<endl; 
                cout<<"Name is : "<<name<<endl; 
                cout<<"Gender is : "<<gender<<endl;
                cout<<"Salary is : "<<salary<<"$"<<endl; 
}
void moneyExchange(){}
void menu(){
        cout<<"=============<<Practice-03-Sample>>========="<<endl; 
        cout<<"1. Salary Finder Program"<<endl; 
        cout<<"2. Money Exchange Program "<<endl; 
        cout<<"3. Exit "<<endl; 

        cout<<"Choose your option(1-3): ";   
}
int main(){
    system("clear"); 
    int option; 

    do{
        menu(); 
        cin>>option; 
        switch(option){
            case 1: {
                salaryFinder();
                break; 
            }
            case 2: 
                moneyExchange();
                break; 
            case 3: 
                cout<<"Exit from the program! Thanks"<<endl; 
                break; 
            default: 
                cout<<"Invalid option! Try again from 1-3"<<endl; 
                break; 
            }
    }while(option!=3); 
    return 0 ; 
}