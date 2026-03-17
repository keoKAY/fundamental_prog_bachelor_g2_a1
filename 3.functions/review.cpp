#include<iostream>
using namespace std; 

// subject is a parameter
// param = placeholder = variables for storing values 
void greeting1(){
    cout<<"Welcome to CPP class !"<<endl; 
}
void greeting(string subject){
    cout<<"---------------------------"<<endl; 
    cout<<"Welcome to "<<subject<<" Programming!"<<endl; 
    cout<<"----------------------------"<<endl; 
    
}

// Exchange usd -> khr 
float exchangeMoneyOld(){
    float usd; 
    cout<<"Enter amount in usd: "; 
    cin>>usd; 
    float result = usd * 4000; 
    cout<<"Result is : "<<result<<endl; 
    return result; 
}


// isUsdToKhr = true , exchange from usd to khr 
// isUsdToKhr = false, exchange from khr to usd 
float exchangeMoney(float amount , bool isUsdToKhr){
    if(isUsdToKhr==true ){
        return amount * 4000; 
    }else{
        return amount / 4000; 
    }
}
int main(){
    system("clear");  

    cout<<"5$= "<<exchangeMoney(5, true )<<endl; 
    cout<<"30000 riels = "<<exchangeMoney(30000, false)<<endl; 
   
    return 0; 
}