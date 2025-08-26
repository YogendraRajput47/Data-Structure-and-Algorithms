#include<iostream>
using namespace std;

int maxOfThree(int a,int b, int c){
    if(a>b && a>c){
        return a;
    }else if(b>c){
        return b;
    }else{
        return c;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    int ans=maxOfThree(a,b,c);
    cout<<"Max of "<<a<<" , "<<b<<" and "<<c<<" is "<<ans;
}