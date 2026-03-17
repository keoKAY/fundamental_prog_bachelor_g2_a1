#include<iostream> 
using namespace std; 
int main(){
    system("clear"); 
    int num; 
    cout<<"Enter number: "; cin>>num; 
    int result = num % 2; 
    if(result == 0 ){
        cout<<"Number : "<<num<<" is even!"<<endl; 
    }else {
        cout<<"Number : "<<num<<" is odd!"<<endl; 
    }
    return 0; 
}