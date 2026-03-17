#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    int apple; 
    cout<<"enter the amount of apple: "; 
    cin>>apple; 

    // Ctrl + /
    // cout<<"You have choose: "; 
    // if(apple>=2){
    //     cout<<apple<<" apples"<<endl; 
    // }else{
    //     cout<<apple<<" apple"<<endl; 
    // }

    // you have chose : 2 apple
    cout<<"You have chose: "<<apple
     <<((apple>=2)?" apples": " apple")<<endl; 
    return 0; 
}