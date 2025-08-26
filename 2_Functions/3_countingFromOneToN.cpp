#include<iostream>
using namespace std;

void countingFromOneToN(int n){
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    countingFromOneToN(n);
}