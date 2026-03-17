#include<iostream>
using namespace std; 

int main(){
    system("clear"); 
    int n,sum=0; 
    cout<<"Enter value N: "; 
    cin>>n; 
    // print value from 1 -> N
    cout<<"All Values:";  
    for(int i = 1; i<=n; i++){
        // condition to only print odd number 
        if(i%2==0) continue; 
        cout<<" "<<i;
        sum = sum + i; 
        // sum+=i;  
    }
    cout<<endl;
    cout<<"Sum of odd number: " <<sum<<endl; 
    return 0; 
}