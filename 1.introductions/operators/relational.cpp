#include<iostream>
using namespace std;
int main(){
    system("clear"); 

    const int PASSCODE = 8888; 
    int password ; 

    // cout<<"Enter your password: "; 
    // cin>>password; 
    password = 123; 

    if(password == PASSCODE){
        cout<<"Login Success!! "<<endl; 
    }else {
        cout<<"Login failed!! "<<endl; 
    }


    string role="admin"; 
    if(role != "admin"){
        cout<<"You are not an admin! "
            <<endl; 
    }else {
        cout<<"YOU ARE ADMIN!!"<<endl;
    }
    return 0 ; 
}