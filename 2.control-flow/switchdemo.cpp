#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    cout<<"\n =============<<Menu>>============"<<endl; 
    cout<<"1. Calculator Program "<<endl; 
    cout<<"2. Salary Finder "<<endl; 
    cout<<"3. Exit "<<endl; 
    int option; 
    cout<<"Choose your option(1-3): "; 
    cin>>option; 
    switch(option){
        case 1: 
            cout<<"You choose : Calculator "<<endl; 
            break;  
        case 2: 
            cout<<"You choose salary Finder "<<endl;
            break;  
        case 3: 
            cout<<"Exit from program!"<<endl; 
            break; 
        default: 
            cout<<"Invalid option!! Choose again from 1-3 "<<endl; 
            // need to add break here too 
            break; 
    }
    return 0 ; 
}