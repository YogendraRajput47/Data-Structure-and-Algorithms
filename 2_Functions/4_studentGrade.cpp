#include<iostream>
using namespace std;

char getGrade(int marks){
    if(marks>=90){
        return 'A';
    }
    else if(marks>=80){
        return 'B';
    }
    else if(marks>=70){
        return 'C';
    }
    else if(marks>=60){
        return 'D';
    }
    else{
        return 'E';
    }
}

int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    char grade=getGrade(marks);
    cout<<"You passed with grade "<<grade<<endl;
}