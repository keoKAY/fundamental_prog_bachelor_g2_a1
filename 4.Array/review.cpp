#include<iostream>
using namespace std; 

void printArray(int values[], int size ){
    cout<<"\nAll values of array : "<<endl; 
    for(int i =0; i<size; i++){
        cout<<values[i]<<" "; 
    }
    cout<<endl; 
}
int main(){
    system("clear"); 
    // create array , square bracket 
    // initialize 
    int values[]={10,20,40,40,50,60}; 
    int size = sizeof(values)/sizeof(*values); 
    cout<<"Size of array : "<<size<<endl; 
    printArray(values,size); 

 
    // Delete elements
     int item = 40; 
     bool isFound = false; 
     int index = 0 ; 
     for(int i = 0 ; i < size ; i++){
        if(item != values[i]){
            values[index]=values[i];
            index++;  
            isFound=true; 
        }
     }
     size = index; 
     if(isFound==false){
        cout<<" ❌ Value = "<<item<<" Not found! "<<endl; 
     }
     printArray(values,size); 
    return 0 ; 
}