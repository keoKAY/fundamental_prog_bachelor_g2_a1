#include<iostream>
using namespace std; 

struct Student{
    // 1. data member 
    int id ; 
    string name, gender; 
    float score; 

    // 2. constructor 
    // Default constructor 
    Student(){
        // default values
        id = 1000; 
        name="<No Name>"; 
        gender="<undefined>"; 
        score= 0; 
    }

    Student(int id , string name,string gender, float score){
        this->id = id; 
        this->name = name; 
        this->gender = gender; 
        this->score = score;
    }
    // 3. function members
    void input(){
        cout<<"-----------<<INPUT>>------------------"<<endl; 
        cout<<"Enter student id: "; cin>>id; cin.ignore();
        cout<<"Enter student name: "; getline(cin,name); 
        cout<<"Enter student gender: "; cin>>gender; 
        cout<<"Enter student score: "; cin>>score; 
    }
    void output(){
        cout<<id<<" - " <<name<<" - "<<gender<<" - "<<score   
            <<endl; 
    }
};
int main(){
    system("clear"); 
    Student student1(1001,"james","male",99);
    student1.output();


    return 0 ; 
}