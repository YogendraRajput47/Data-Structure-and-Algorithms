#include<iostream>
using namespace std;

void printName(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Yogendra rajput"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printName(n);
}