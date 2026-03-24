#include<iostream>
using namespace std; 

void printArray(int arr[], int size ){
    for(int i = 0 ; i<size; i++){
        cout<<" "<<arr[i]; 
    }
    cout<<endl; 
}

int main(){
    system("clear");
    int values[]={33,22,7,4,88,34}; 
    int size = sizeof(values)/ sizeof(*values); 
    cout<<"- Original array : "<<endl; 
    printArray(values,size); 

    for(int i = 0 ; i<size; i++){
        for(int j = 0; j<size-i-1; j++){
            if(values[j] < values[j+1]){
                swap(values[j],values[j+1]); 
            }
        }
    }

    cout<<"- After sorted : "<<endl; 
    printArray(values,size); 


    return 0 ; 
}