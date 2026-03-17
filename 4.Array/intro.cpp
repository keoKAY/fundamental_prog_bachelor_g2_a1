#include<iostream>
using namespace std; 
int main(){
    system("clear"); 

    //int score1,score2,score3,score4,score5; 
    int scores[5]; // 5 is a size of the array

    // assign value to element 
    scores[0] = 10; 
    scores[1] = 20; 
    scores[2] = 30; 
    scores[3] = 40; 
    scores[4] = 50; 

    cout<<"All values of array: "<<endl; 
    for(int i=0; i<5; i++  ){
       // cout<<"I = "<<i<<endl; 
       cout<<scores[i]<<endl; 
    }
    

    return 0 ; 
}