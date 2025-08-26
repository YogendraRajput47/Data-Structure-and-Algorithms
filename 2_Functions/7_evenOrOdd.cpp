#include<iostream>
using namespace std;

bool getEvenOrOdd(int n){
    if(n%2==0){
        return true;
    }
    return false;
}


int main(){
    int n;
    cin>>n;
    bool ans=getEvenOrOdd(n);
    if(ans){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
}