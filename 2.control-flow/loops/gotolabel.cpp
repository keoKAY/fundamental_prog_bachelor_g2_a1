#include<iostream>
using namespace std; 


int main(){
    system("clear"); 
    int option; 
    menu: 
        cout<<"--------<<Welcome main menu>>-------"<<endl; 
        cout<<"1. First program "<<endl ;
        cout<<"2. Second Program "<<endl; 
        cout<<"3. Go back to menu "<<endl;
        cout<<"-> Choose your option: ";
        cin>>option; 
        if(option==1)
            cout<<"you choose First PRogram!"<<endl; 
        else if (option==2)
            cout<<"you choose Second program!"<<endl; 
        else if (option==3)
            goto menu; 
        else 
            cout<<"Invalid option!! try again "<<endl;
    return 0 ; 
}