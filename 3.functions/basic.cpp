#include<iostream>
using namespace std;
// void -> return nothing 
void menu(){
    cout<<"1. Calculator program "<<endl ; 
    cout<<"2. Money Exchange program "<<endl; 
    cout<<"3. Third program "<<endl;   
}
int main(){
    system("clear"); // cls 
    // call a function 
    menu();
    return 0; 
}