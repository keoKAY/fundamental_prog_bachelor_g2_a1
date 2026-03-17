#include<iostream>
using namespace std; 
float findAverage(float a , float b , float c ){
    return (a + b + c) / 3;
}
char findGrade(float average){
    if(average>=95) return 'A'; 
    else if(average>=85) return 'B'; 
    else if(average>=75) return 'C'; 
    else if (average>=60) return 'D'; 
    else if(average>=50) return 'E'; 
    else return 'F';
}

int main(){
    system("clear"); 
    string name,gender; 
    float cpp,eng,math; 

    cout<<"---------[Input]---------"<<endl; 
    cout<<"Enter student name: "; 
    getline(cin, name); 
    cout<<"enter student gender: "; 
    getline(cin,gender); 

    cout<<"Enter student scores(cpp,math,eng:)"<<endl; 
    cin>>cpp; 
    cin>>math; 
    cin>>eng; 

    // function to find average
    float average = findAverage(cpp,math,eng); 
    // function to find the grade based on average 

    cout<<"----------[Output]--------"<<endl; 
    cout<<"Total Grade: "<<findGrade(average)<<endl; 
    cout<<"Total Average: "<<average<<endl; 
    cout<<"Student name is : "<<name<<endl; 
    cout<<"Student gender is : "<<gender<<endl; 
    cout<<"Scores(cpp-eng-math): "
        <<cpp<<"-"<<eng<<"-"<<math<<endl; 
    cout<<"Grade(cpp-eng-math): "
        <<findGrade(cpp)<<"-"<<findGrade(eng)<<"-"
        <<findGrade(math)<<endl;

    return 0 ; 
}