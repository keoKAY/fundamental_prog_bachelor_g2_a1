#include<iostream>
using namespace std; 

// uppercase , lowercase 
// camelCase , PascalCase 
struct Student{
    // data member 
    string name,gender; 
    float score; 

    // function member
    void input(){
        cout<<"------INPUT-----"<<endl; 
    }
    void output(){
        cout<<"-----OUTPUT-----"<<endl; 
        cout<<"Name : "<<name<<endl; 
        cout<<"Gender: "<<gender<<endl; 
        cout<<"Score: "<<score<<endl; 
    }

};
int main(){
    system("clear");
    Student student1; 
    // assign value 
    student1.name = "bona"; 
    student1.gender = "male"; 
    student1.score = 95; 

    // access value 
    cout<<"Student name: "
        <<student1.name<<endl; 
    cout<<"Student gender:"
        <<student1.gender<<endl; 

 

    return 0 ; 
}