#include<iostream>
using namespace std; 

// printArray(array,size)
int main(){
    system("clear"); 
    // initalized 
    int values[]={20,30,40,10,50}; 
    int size = sizeof(values)/sizeof(*values); 

    cout<<"All values: "<<endl; 
    for(int i = 0; i< size; i++){
        cout<<values[i]<<" "; 
    }
    cout<<endl; 

    cout<<"Using foreach to print: "<<endl; 
    for(int val : values ){
        cout<<val<<" "; 
    }
    cout<<endl; 

    return 0 ; 
}