#include<iostream>
using namespace std;

// Function declaration
int addTwoNumbers(int a, int b);
int main(){
    int a,b;
    cout<<"Enter a first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    //function calling
    int ans=addTwoNumbers(a,b);
    cout<<"Sum of "<<a<<"and "<<b<<" is "<<ans;
    
}


//Function definition
int addTwoNumbers(int a, int b)
{
    return a + b;
}
