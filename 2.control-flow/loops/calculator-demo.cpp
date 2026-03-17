#include<iostream>
using namespace std;
int main(){

    system("clear"); 
    int a , b ; 
    char optr, option; 
    float result = 0 ; 
 do{
    cout<<"-----------[ Calculator]---------"<<endl; 
    cout<<"Enter value A: "; cin>>a; 
    cout<<"Enter value B : "; cin>>b; 

    cout<<"-> Choose opearators(+,-,*,/,%): "; 
    cin>>optr; 

    switch(optr){
        case '+': result = a + b; break; 
        case '-': result = a - b; break; 
        case '*': result = a * b; break; 
        case '/': result = a / (float)b; break; 
        case '%': result = a % b; break; 
        default: 
            cout<<"==> Invalid Options!! "
                <<"\n  Choose available Operator(+,-,*,/,%)"<<endl; 
            break; 
    }
    cout<<"Result is : "<<result<<endl; 

    cout<<"\nDo you want to continue? y/n: "; 
    cin>>option;

 }while(option!='n' ); 

return 0; 
}