#include<iostream>
using namespace std; 

int main(){
    system("clear"); 

    for(int i = 1; i<=10; i++){
        if(i==5 || i==6 || i==7 ) continue; 
        cout<<" I = "<<i<<endl; 
    }
    cout<<endl; 
    return 0 ; 
}