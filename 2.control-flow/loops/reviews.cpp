#include<iostream> 
using namespace std; 
// for , while , do-while 
int main(){
    system("clear"); 
    int n, sum=0;
    cout<<"Enter n: "; cin>>n; 
    for(int i = 1; i<=n; i++){
        cout<<" "<<i; 
        sum = sum + i;  
    }
    cout<<"\n=>Result: "<<sum<<endl; 
    return 0; 
}